#include<stdio.h>
#define SIZE 5
int q[SIZE];
int front=-1,rear =-1;
void insert(int i){
    if(rear==SIZE-1){
        printf("Stack overflow\n");

    }else if(rear==front && front==-1){
        q[++rear] = i;
        ++front;
    }else{
        q[++rear] = i;
    }
}

int main()
{
    
    insert(5);
    insert(7);
    insert(3);
    insert(4);
    insert(1);
    insert(2);
    return 0;

}