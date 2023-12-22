#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={4,2,6,3};
int asize = sizeof(a) / sizeof(a[0]); 
sort(a,a+asize);
bool res = binary_search(a,a+asize,5);
(res?cout<<"true":cout<<"false");
for(int i =0 ; i<asize;i++){
  cout<<a[i]<<endl;
}
  return 0;
}