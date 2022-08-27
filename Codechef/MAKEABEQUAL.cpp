#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int ans[n];
    long long sum1 = 0;
    long long sum2 = 0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        ans[i] = arr1[i]-arr2[i];
        sum1 += ans[i];
        sum2 += abs(ans[i]);
    }
    if(sum1==0){
        cout<<sum2/2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
