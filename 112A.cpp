#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
    char str1[10000], str2[10000];
    cin >> str1 >> str2 ;
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
        if(str1[i]>str2[i]){
            cout<<1;
            return 0;
        }else if(str2[i]>str1[i]){
            cout<<-1;
            return 0;
        }

    }
    cout<<0;
    return 0;
}
    