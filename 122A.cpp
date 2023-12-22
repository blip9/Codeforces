#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int remainder;
    if(num % 4 == 0 || num % 7 == 0 || num % 47 ==0){
        cout<<"YES";
        return 0;
    }
    while(num>0){
        remainder = num%10;
        num = num/10;
        if(remainder == 4 ){
           continue;
        }else if(remainder == 7 ){
            continue;
        }else{
            cout<<"NO";
            return 0;
        }
        num = num/10;
    }
    cout<<"YES";
    return 0;

}