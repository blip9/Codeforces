#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum =0 , mid;
    int coins[num];
    for(int i=0;i<num;i++){
        cin>>coins[i];
        sum += coins[i];
    }
    int j=0;
    mid = (sum/2);
    int greatest=0;
    sum = 0;
    while(sum<=mid){
        for( int i=0;i<num;i++){
            if(coins[greatest]<coins[i]){
                greatest = i;
            }
        
        }
        sum+=coins[greatest];

        coins[greatest]=0;
        j++;
        
    }
    cout<<j;
    return 0;
}   