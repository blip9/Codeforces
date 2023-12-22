#include<stdio.h>
int output[3][3]={{1,1,1},{1,1,1},{1,1,1}};
void changestate(int i,int j){
    if(i>=0 && j>=0 && i<3 && j<3){
        if(output[i][j]==1){
            output[i][j]=0;
        }else{
            output[i][j]=1;
        }
    }
}
int main(){
    int input[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&input[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<input[i][j];k++){
                changestate(i,j);
                changestate(i+1,j);
                changestate(i-1,j);
                changestate(i,j+1);
                changestate(i,j-1);
               

            }
            
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",output[i][j]);
        }
        printf("\n");
    }



    return 0;
}