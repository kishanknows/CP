#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<char> ans(n,'.');
    vector<vector<char>> vec(n);
    for(int i=0;i<n;i+=k){
        ans[(c-1)%k + i] = 'X';
    }
    int repeat = n;
    while(repeat){
        vec[r-1] = ans;
        ans.insert(ans.begin(),ans.back());
        ans.pop_back();
        r = (r<n)?(r+1):1; 
        repeat--;
    }
    for(auto ele: vec){
        for(auto ch : ele){
            cout<<ch;
        }
        cout<<endl;
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