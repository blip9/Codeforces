#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        priority_queue<pair<int,int>>  q;
        loop(i,0,n){
            int temp;
            cin>>temp;
            a.push_back(temp);
            q.push({temp,i});

        }
        if(a.size()==1){
            cout<<a[0]<<endl;
            continue;
        }
        for(int i=0;i<k;i++){
            pair<int,int>max = q.top();
            q.pop();
            int j = max.second;
            if(j<n-1 && j>0){


                    int smaller = a[j+1]<a[j-1]?a[j+1]:a[j-1];
                    a[j] = smaller;

            }else if(j==0){
                a[j] = a[1];
            }else if(j==n-1){
                a[j] = a[j-1];
            }

        }
        long long sum =0;
        for(int i =0;i<n;i++){
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}