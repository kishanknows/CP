#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    string s[n+1];
    int ans[n+1][27] ;
    fill( *ans, *ans +  27, 1 );
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=26;j++){
            ans[i][j] = ans[i-1][j];
        }
        for(int j=0;j<s[i].length();j++){
            ans[i][int(s[i][j])-96] = !ans[i-1][int(s[i][j])-96];
        }
    }
    for(int i=0;i<q;i++){
        int a;
        char b;
        cin>>a>>b;
        string str = (ans[a][int(b)-96]==1)?"Yes":"No";
        cout<<str<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}