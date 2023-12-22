#include<iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    int line[len];
    int largest=0,smallest=0;
    for(int i =0;i<len;i++){
        cin>>line[i];
        if(line[largest]<line[i]){
            largest = i;
        }
        if(line[smallest]>=line[i]){
            smallest = i;
        }
    }
    if(largest>smallest){
        cout<<(largest)+(len-1-smallest-1);
    }else{
        cout<<(largest)+(len-1-smallest);

    }

    return 0;
}