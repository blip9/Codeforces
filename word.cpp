#include<iostream>
using namespace std;
#include<string.h>
#include<conio.h>
int main(){
    char word[10000];
    int i=0;
    cin>>word;
    int lower=0,upper = 0;
    while(word[i]){
        if(islower(word[i])){
            lower+=1;
        }else if(isupper(word[i])){
            upper+=1;
        
        }
        i++;
    }
    if(lower<upper){
        cout<<strupr(word)<<endl;
    }
    else{
        cout<<strlwr(word)<<endl;
    }
    return 0;
}