public class Test{
    int marks;
    char grade;
    

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Test{");
        sb.append('}');
        return sb.toString();
    }

    @Override
    public int hashCode() {
        int hash = 5;
        hash = 89 * hash + this.marks;
        hash = 89 * hash + this.grade;
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Test other = (Test) obj;
        if (this.marks != other.marks) {
            return false;
        }
        return this.grade == other.grade;
    }
    public static void main(String[] args){
        Test t = new Test();
        System.out.println(t.toString());
        t.grade = 'A';
        t.marks = 89;
        Test y =new Test();
        y.grade = 'A';
        y.marks = 80;
        boolean b = t.equals(y);
        System.out.println(b);
        StringBuilder s = new StringBuilder();
        s.
    }
}