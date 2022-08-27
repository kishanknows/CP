#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    int count = 0;
    int arr[4];
    cin>>x;
    for(int i=1;i<4;i++){
        cin>>arr[i];
    }
    while(x){
        x = arr[x];
        count++;
    }
    if(count==3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
