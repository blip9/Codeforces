#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
#include<cstring>
#include<string.h>
using namespace std;
int main(){
    string stones,inst;

    cin>>stones>>inst;
    int pos=1;
    int p=0,q =0;
    for(int i=0;i<(inst).length();i++){
        char a,b;
        a = stones[p];
        b = inst[q];
        if(a==b){
            p++;
            q++;
            pos++;
        }else{
            q++;

        }
    }   

    cout<<pos;
    return 0;
}