#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define llvi vector<long long int>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    /*ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    endif*/
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        vector<vector<char>> board(r,vector<char>(c,'W'));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>board[i][j];
            }
        }
        bool flag = false;
        set<char> sr1;
        set<char> srn;
        set<char>sc1;
        set<char>scn;
        for(int i=0;i<c;i++){
            sr1.insert(board[0][i]);
            srn.insert(board[r-1][i]);
            
        }
        for(int i=0;i<r;i++){
            sc1.insert(board[i][0]);
            scn.insert(board[i][c-1]);
            
        }

        if((sr1.size()==1 && srn.size()==1 && board[0][0]!=board[r-1][c-1])||
        (sc1.size()==1 && scn.size()==1 && board[0][0]!=board[r-1][c-1])){
            cout<<"No"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
    }

    
    return 0;
}