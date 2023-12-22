#include<iostream>
#include<string.h>
#include<string>
#include<cstring>
using namespace std;
int main(){ 
    int counter1 =0,counter2=0;
    char choice1[102];
    char choice2[102];
    char choice3[102];
    char choice4[102];
    int longest=0,shortest=0;
    char choice[4]={'A','B','C','D'};
    cin>>choice1>>choice2>>choice3>>choice4;
    int len1[4] = {strlen(choice1)-2,strlen(choice2)-2,strlen(choice3)-2,strlen(choice4)-2} ;
    for(int i=0;i<4;i++){
        if(len1[longest]<len1[i]){
           longest=i;
        }else if(len1[shortest]>len1[i]){
           shortest=i;
        }

    }
    
    for(int i=0;i<4;i++){
        if(len1[longest]/2>=len1[i]){
            counter1+=1;
        }
        if(len1[shortest]<=len1[i]/2){
            counter2+=1;
        }
        
    }
    if(counter1==counter2&&counter1 == 3){
        cout<<choice[2];
    }
    else if(counter1==3){
        cout<<choice[longest];
        return 0;
    }
    else if(counter2==3){
        cout<<choice[shortest];
        return 0;
    }
    else{
        cout<<choice[2];
    }

    


    return 0;
}