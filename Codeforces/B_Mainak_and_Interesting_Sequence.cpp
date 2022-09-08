#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n%2 == 0 && (m%n)%2!=0 || n>m ){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        if(n%2 == 0){
            cout<<m/n + (m%n)/2<<" "<<m/n + (m%n)/2<<" ";
            for(int i = 1;i<=n-2 ;i++){
                cout<<m/n<<" ";
            }
        }
        else{
            cout<<m/n + m%n<<" ";
            for(int i = 1;i<=n-1 ;i++){
                cout<<m/n<<" ";
            }
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