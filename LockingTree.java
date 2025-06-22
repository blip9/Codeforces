import java.util.*;

class TreeNode {
    String name;
    int uid; // user who locked it, -1 if unlocked
    TreeNode parent;
    List<TreeNode> children;

    public TreeNode(String name) {
        this.name = name;
        this.uid = -1;
        this.children = new ArrayList<>();
    }
}

public class LockingTree {
    private Map<String, TreeNode> nodeMap = new HashMap<>();

    public void buildTree(List<String> names, int m) {
        if (names.isEmpty()) return;

        Queue<TreeNode> q = new LinkedList<>();
        TreeNode root = new TreeNode(names.get(0));
        nodeMap.put(names.get(0), root);
        q.add(root);

        int index = 1;
        while (!q.isEmpty() && index < names.size()) {
            TreeNode curr = q.poll();
            for (int i = 0; i < m && index < names.size(); i++) {
                TreeNode child = new TreeNode(names.get(index));
                child.parent = curr;
                curr.children.add(child);
                nodeMap.put(names.get(index), child);
                q.add(child);
                index++;
            }
        }
    }

    public boolean lock(String name, int user) {
        TreeNode node = nodeMap.get(name);
        if (node.uid != -1 || hasLockedDescendant(node) || hasLockedAncestor(node)) return false;
        node.uid = user;
        return true;
    }

    public boolean unlock(String name, int user) {
        TreeNode node = nodeMap.get(name);
        if (node.uid != user) return false;
        node.uid = -1;
        return true;
    }

    public boolean upgrade(String name, int user) {
        TreeNode node = nodeMap.get(name);
        if (node.uid != -1 || hasLockedAncestor(node) || !hasLockedDescendant(node) || hasLockedDescendantWithoutSameId(node,user)) return false;

        unlockAllDescendants(node);
        node.uid = user;
        return true;
    }
    public boolean hasLockedDescendantWithoutSameId(TreeNode node,int uid){
        for(TreeNode child:node.children){
            if(child.uid!=uid)return true;
            if(hasLockedDescendantWithoutSameId(child, uid))return false;
        }
        return false;
    }

    public void unlockAllDescendants(TreeNode node){
        for(TreeNode child:node.children){
            child.uid = -1;
        }
    }

    private boolean hasLockedAncestor(TreeNode node) {
        TreeNode curr = node.parent;
        while (curr != null) {
            if (curr.uid != -1) return true;
            curr = curr.parent;
        }
        return false;
    }

    private boolean hasLockedDescendant(TreeNode node) {
        for (TreeNode child : node.children) {
            if (child.uid != -1 || hasLockedDescendant(child)) return true;
        }
        return false;
    }

    private void findLockedDescendants(TreeNode node, List<TreeNode> locked) {
        for (TreeNode child : node.children) {
            if (child.uid != -1) locked.add(child);
            findLockedDescendants(child, locked);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // number of nodes
        int m = sc.nextInt(); // m-ary tree
        int q = sc.nextInt(); // number of queries
        sc.nextLine(); // consume newline

        List<String> names = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            names.add(sc.nextLine().trim());
        }

        LockingTree tree = new LockingTree();
        tree.buildTree(names, m);

        for (int i = 0; i < q; i++) {
            String[] parts = sc.nextLine().trim().split(" ");
            int type = Integer.parseInt(parts[0]);
            String nodeName = parts[1];
            int user = Integer.parseInt(parts[2]);

            boolean result = switch (type) {
                case 1 -> tree.lock(nodeName, user);
                case 2 -> tree.unlock(nodeName, user);
                case 3 -> tree.upgrade(nodeName, user);
                default -> false;
            };

            System.out.println(result);
        }
    }
}