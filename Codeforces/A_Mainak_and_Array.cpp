#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        maxi = max(maxi,arr[n-1]-arr[i]);
    }
    for(int i=1;i<n;i++){
        maxi = max(maxi,arr[i]-arr[0]);
    }
    for(int i=0;i<n-1;i++){
        maxi = max(maxi,arr[i]-arr[i+1]);
    }
    if(n==1){
        cout<<0<<endl;
    }
    else{
        cout<<maxi<<endl;
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