#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    string in;
    cin>>in;
    int k;
    cin>>k;
    int alpha[26];
    int max=0;
    for(int i=0;i<26;i++){
        cin>>alpha[i];
        max = alpha[i]>max?alpha[i]:max;
    }
    int sum=0;
    int j=1;
    for(int i=0;i<in.length()+k;i++){
        if(i<in.length()){
            sum+= j*alpha[(int)in[i] - 97];
        }else{

            sum+=j*max;
        }
        j++;
    }
    

    cout<<sum;

    
    return 0;
}