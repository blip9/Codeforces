#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
    char input[1000];
    char temp;
    cin>>input;
    for(int i=0;i<strlen(input);i+=2){
        for(int j=0;j<strlen(input)-i-1;j+=2){
            if(input[j]>input[j+2]){
                temp = input[j];
                input[j] = input[j+2];
                input[j+2] = temp;

            }
        }
    }
    cout<<input;
    
    return 0;
}