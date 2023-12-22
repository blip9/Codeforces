#include<bits/stdc++.h>
using namespace std;
//this is just me implementing bst
struct node{
    int value;
    node* left;
    node* right;
};
node *head = NULL;
void insert(node*& pos,int value){
    if(pos==NULL){
        node* temp = new node;
        temp->value = value;
        temp->left = NULL;
        temp->right= NULL;
        pos = temp;
    }else if(value<pos->value){
        insert(pos->left,value);
    }else{
        insert(pos->right,value);
    }
}
void traverse(node* pos){
    if(pos!=NULL){
        traverse(pos->left);
        cout<<pos->value<<" ";
        traverse(pos->right);
    }
}
void pre_traverse(node* pos){
    if(pos!=NULL){
        cout<<pos->value<<" ";
        traverse(pos->left);
        traverse(pos->right);
    }
}
void post_traverse(node* pos){
    if(pos!=NULL){
        traverse(pos->left);
        traverse(pos->right);
        cout<<pos->value<<" ";
    }
}
node* min_element(node* root){
    while(root->left!=NULL){
        root = root->left;

    }
    return root;
}
node* delete_element(node* root , int element){
    if(root==NULL) return root;
    else if(element<root->value) root->left = delete_element(root->left,element);
    else if(element>root->value) root->right = delete_element(root->right,element);
    //element found condition
    else{
        if(root->left==NULL && root->right== NULL){
            delete root;
            root = NULL;
            return root;
        }else if(root->left==NULL){
            node* temp = root;
            root = root->right;
            delete temp;
            return root;

        }else if(root->right==NULL){
            node* temp = root;
            root = root->left;
            delete temp;
            return root;
        }else{
            root->value = min_element(root->right)->value;
            delete_element(root->right,root->value);
            return root;

        }
    }
    return root;
}
int main(){
    insert(head,9);
    insert(head,10);
    insert(head,89);
    insert(head,5);
    traverse(head);
    cout<<endl;
    pre_traverse(head);
    cout<<endl;
    post_traverse(head);
    cout<<endl;
    delete_element(head,5);
    traverse(head);
    return 0;
}