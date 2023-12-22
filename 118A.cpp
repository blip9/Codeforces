#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main(){
    string input;
    int ctr=0;
    cin >> input;
    int length = input.length();

    for(int i = 0 ; i<length ; i++){
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i] == 'o' || input[i]=='u' || input[i]=='A' || input[i]=='E' || input[i]=='I' || input[i]=='O' || input[i]=='U'|| input[i]=='y'|| input[i]=='Y'){
            ctr+=1;
               
        }
        
        else{
            if(isupper(input[i])){
                input[i] = input[i]+32;
                cout<<'.'<<input[i];
            }
            else{
                cout<<'.'<<input[i];
            }
        }
    }
    return 0 ;
}
