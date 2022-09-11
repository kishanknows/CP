#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    long long n=1;
    long long i = 0;
    while(i<s.length()){
        if(s[i]=='1'){
            n *= 2;
            n %= 1000000007;
        }
        i++;
    }
    cout<<n;
}
int main(){
    solve();
    return 0;
}