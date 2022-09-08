#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int ones = 0;
    int maxzero = 0;
    string strs[n+1];
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(strs[i][j]=='1'){
                ones++;
            }
            if(strs[i][j]=='0'){
                maxzero = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((strs[i][j]=='0' && strs[i][j+1]=='0') || (strs[i][j]=='0' && strs[i+1][j]=='0') || (strs[i+1][j]=='0' && strs[i][j+1]=='0') || (strs[i][j]=='0' && strs[i+1][j+1]=='0')){
                cout<<ones<<endl;
                return;
            }
        }
    }
    int ans = (maxzero==0)?(ones-2):(ones-1);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}