#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
class Node{
    public:
        int value;
        Node* next;

        Node(int value){
            this->value = value;
            this->next = NULL;
        }
        void insertE(int num){
            Node* node = this;
            if(node->next==NULL){
                Node* temp = new Node(num);
                node->next = temp;
                temp->next = NULL;
            }else{
                node->next->insertE(num);
            }
            
            
        }
        void insertB(int num){
            Node* temp = new Node(this->value);
            this->value = num;
            temp->next = this->next;
            this->next = temp;
        }
        void print(){
            Node* node = this;
            while(node->next!=NULL){
                cout<<node->value<<"\t";
                node = node->next;
            }
            cout<<node->value;
        }
};
int main(){
    Node head = Node(78);
    head.insertE(77);
    head.insertE(33);
    head.insertE(65);
    head.insertE(13);
    head.insertB(19);

    head.print();



    
    return 0;
}
