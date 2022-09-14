#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(auto &i: arr){
        cin>>i;
    }
    int count = 0;
    int maxl = INT32_MIN;
    int maxh = INT32_MAX;
    for(int i=0 ;i<n-1;i++){
        maxl = max(maxl, arr[i]-x);
        maxh = min(maxh, arr[i]+x);
        if(maxl > arr[i+1]-x && arr[i+1]+x < maxl  || maxh < arr[i+1]-x && arr[i+1]+x > maxh){
            count++;
            maxl = INT32_MIN;
            maxh = INT32_MAX;
        }
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