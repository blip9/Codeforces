#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
    ull a;
    cin>>a;
    int even=-1;
    int index=0,count=0;
    vi num;
    while(a>0){
        num.push_back(a%10);
        a = a/10;
    }
    int odd = num[0];
    int flag = 0;
    for(auto i:num){
        if(i%2==0){
            
            if(flag==0){
                index = count;
                even = i;
            }else if(even>i || odd>i){
                index = count;
                even = i;
            }else if(even==i && odd>i){
                index = count;
                even = i;
            }
            flag = 1 ;
            
        }
        count++;
    }
    count = index;
    if(flag==0){
        cout<<-1<<endl;
    }else{
        ull temp = num[0];
        num[0] = num[count];
        num[count] = temp;
        int fnum=0;
        count = 0;
        for(auto i:num){
            fnum += pow(10,count)*i;
            count++;
        }
        cout<<fnum<<endl;
    }
    
    return 0;
}