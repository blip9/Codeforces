#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string words[m][2];
    loop(i,0,m){
        string s1,s2;
        cin>>s1>>s2;
        words[i][0]=s1;
        words[i][1]=s2;
    }
    string final;
    loop(i,0,n){
        cin>>final;
        loop(j,0,m){
            if(final==words[j][0]){
                if(words[j][1].size()>=words[j][0].size()){
                    cout<<words[j][0]<<endl;
                }else{
                    cout << words[j][1]<<endl;
                }
            }
        }
        
    }
    return 0;
}