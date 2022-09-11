#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2 == 0){
        for(int i=n-2;i>0;i--){
            cout<<i<<" ";
        }
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        cout<<1<<" ";
        for(int i=n-2;i>1;i--){
            cout<<i<<" ";
        }
        cout<<n-1<<" "<<n<<endl;
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