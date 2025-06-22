#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int mex(const vector<int>& arr){
    unordered_set<int> s(arr.begin(), arr.end());
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    vector<int> a;
    a.push_back(9);
    a.push_back(7);
    a.push_back(3);
    a.push_back(8);
    a.push_back(4);
    a.push_back(0);
    a.push_back(1);
    cout<<mex(a);
    if(find(a.begin(),a.end(),8)==a.end()){
        cout<<"Not present"<<endl;
    }else cout<<"present"<<endl;
    return 0;
}