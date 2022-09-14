#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(auto &i : arr){
        cin>>i;
    }
    if(m==1){
        cout<<2<<endl;
        return;
    }
    sort(begin(arr),end(arr));
    vector<int> ans(m);
    for(int i =0 ;i<m-1;i++){
        ans[i] = arr[i+1] - arr[i] - 1;
    }
    ans[m-1] = arr[0] + n - arr[m-1] - 1;
    int sum = 0;
    sort(begin(ans),end(ans),greater<int>());
    for(int i =0 ;i<m;i++){
        if((ans[i]-4*i) == 1){
            sum++;
        }
        else if((ans[i]-4*i)>1){
            sum += ans[i]-4*i-1;
        }
        else if((ans[i]-4*i)<1){
            cout<<n-sum<<endl;
            return;
        }
    }
    cout<<n-sum<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}