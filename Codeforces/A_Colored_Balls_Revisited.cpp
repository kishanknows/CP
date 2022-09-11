#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    int max = INT_MIN;
    int index = 1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    cout<<index<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}