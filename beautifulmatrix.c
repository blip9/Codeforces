#include<stdio.h>
int main(){
    int matrix[5][5];
    int a,b;
    int result;
    for(int i=0 ; i<5 ; i++){
         for(int j=0 ; j<5 ;j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]){
                a = i;
                b = j;
            }
         }
    }
    if(a>2){
        result = a-2;
     }  
    else{
         result = 2-a;
    }
    if(b>2){
        result += b-2;
    }
     else{
        result += 2-b;
    }
    printf("\n%d",result);
    return 0;
    
}