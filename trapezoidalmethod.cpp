#include<bits/stdc++.h>
using namespace std;
float f(int x){
    return log(xz);
}
int main(){

    float h , l , level;
    cout<<f(2);
    cout<<"Enter the number of steps:";
    cin>>level;
    cin>>h>>l;
    float step = (h-l)/level;
    float sum = f(l)+f(h);
    cout<<l<<"\t"<<f(l)<<endl;
    for(int i=1;i<level;i++){
        l += step;
        sum += 2*(f(l));
        
        cout<<l<<"\t"<<f(l)<<endl;
    }
    sum = sum*step/2;
    cout<<h<<"\t"<<f(h)<<endl;
    cout<<sum;
    return 0;
}   