#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main(){
    int num;
    cin>>num;
    string a[num];
    for(int i =0;i<num;i++){
        cin>>a[i];

    }       
    for(int i =0;i<num;i++){
        if(a[i].length()>10){
            cout<<a[i][0] << a[i].length()-2 << a[i][a[i].length()-1] <<endl;
        }
        else{
            cout<< a[i] << endl;
        }

    }   

    return 0;
}