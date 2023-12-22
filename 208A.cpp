#include<bits/stdc++.h>
using namespace std;
int main(){
    string song;
    cin >> song;
    int size = song.length();
    int flag;
    for(int i=0;i<size;i++){
        if(song[i]=='W'&& song[i+1]=='U'&& song[i+2]=='B'){
            if(flag == 1){
                cout<<" ";
            }
            i =i+2;
            flag = 0;
            continue;

        }else{
            flag =1;
            cout<<song[i];
        }

    }
    return 0;
}