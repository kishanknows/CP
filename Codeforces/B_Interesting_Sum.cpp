#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]+arr[n-2]-arr[0]-arr[1]<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}