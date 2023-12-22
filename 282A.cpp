#include<bits/stdc++.h>
using namespace std;
int main(){
    int opr,x=0;
    cin>>opr;
    string operation;
    for(int i=0 ;i<opr;i++){
        cin>>operation;
        if(operation=="X++"){
            x++;
        }else if(operation=="++X"){
            ++x;
        }else if(operation=="--X"){
            --x;
        }else if(operation=="X--"){
            x--;
        }

    }
    cout<<x;
    return 0;
}