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
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int count =0;
        bool flag = false;
        arr.push_back(n%2);
        n = n/2;
        while(n>0){
            arr.push_back(n%2);
            n = n/2;
            if(arr[arr.size()]!=0 && arr[arr.size()-1]!=0)flag = true;
            count++;
        }
        int bal = pow(2,count)-n;
        vector<int>nums(count+2,0);

        int curr =0;
        if(flag == true){
            nums[0] =1;
            for(int i=1;i<nums.size();i++){
                if(i%2==0 && curr<bal){
                    curr+= pow(2,count-i);
                    nums[i] = -1;
                }
            }
            reverse(nums.begin(),nums.end());
            
        }
        if(flag == true){
            cout<<nums.size()<<endl;
            for(auto i:nums)cout<<i<<" ";
            cout<<endl;

        }else{
            cout<<arr.size()<<endl;
            for(auto i:arr)cout<<i<<" ";
            cout<<endl;
        }
    }


    
    return 0;
}