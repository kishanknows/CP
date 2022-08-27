#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int ind = (n-1)/2;
    char ch = s[ind];
    int count = (n-1)%2?2:1;
    while(s[--ind]==ch && ind>=0){
        count+=2;
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}