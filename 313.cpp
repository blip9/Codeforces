#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<0){
        num = (num/10)>((num%10)+10*((num/10)/10))?num/10:((num%10)+10*((num/10)/10));
    }
    cout<<num;
    return 0;
}