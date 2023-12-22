#include<stdio.h>
struct point{
    int a;
    int b;
    int c;
};
int main(){
    int a;
    
    int sum_x=0,sum_y=0,sum_z=0;
    scanf("%d",&a);
    struct point points[a];
    for(int i=0;i<a;i++){
        scanf("%d %d %d",&points[i].a,&points[i].b,&points[i].c);

    }
    for(int i=0;i<a;i++){
       sum_x += points[i].a;
       sum_y += points[i].b;
       sum_y += points[i].b; 
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        printf("YES");

    }
    else{
        printf("NO");
    }


    return 0;
}