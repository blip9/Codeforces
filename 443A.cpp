#include<bits/stdc++.h>
using namespace std;
int main(){
    string array;
    getline(cin, array);
    set<int> arr;
    for(auto i:array){
        if(i<=122 && i>=65){
            arr.insert(i);
        }
        
    }
    cout<< arr.size()<<endl;
    

    return 0;
}
