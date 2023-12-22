#include<stdio.h>
#include<string.h>
int main(){
    int len,time;
    char temp;
    scanf("%d %d",&len,&time);
    char queue[len];
    char queuecpy[len];
    scanf("%s",&queue);
    for(int i=0;i<len;i++){
        queuecpy[i] = queue[i];
    }
    for(int j=0;j<time;j++){
        for(int i=0;i<len;i++){
            if(queuecpy[i]=='G' && queuecpy[i-1]=='B'){
                queue[i-1] = 'G';
                queue[i] = 'B';
            }
             
        }
         for(int i=0;i<len;i++){
            queuecpy[i] = queue[i];
        }
    }
    printf("%s",queue);

    return 0;

}