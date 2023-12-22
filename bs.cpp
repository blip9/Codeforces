#include<bits/stdc++.h>
using namespace std;
int bs(int key,int lower , int upper,int arr[]){
    int mid = (upper - lower)/2 +lower ;
    if(lower<upper){
        if(arr[mid]==key){
            return mid;
        
        }else if(key>arr[mid]){
            bs(key,mid+1 ,upper , arr);
        }else{
            bs( key, 0 , mid-1 , arr);
        }
    }else{
        return -1;
    }
    return 0;

}
int main(){
    int arr[]={2,5,7,9,23,43,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< bs(9,0,size,arr);
    return 0;
}