#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q1;
    int num,tasks;
    int element;
    int flag=1;
    unsigned long long time=0;
    int front=1;
    cin >> num >> tasks;
    for(int i=0; i<tasks; i++){
         cin >> element;
         q1.push(element);
    }
    int size = q1.size();
    while(!q1.empty())
    {   
        time += flag?q1.front()-front:(num-front)+q1.front();
        front = q1.front();
        q1.pop();
        
        flag = q1.front()>front||q1.front()==front?1:0;

    }
    cout << time;
    return 0;
}