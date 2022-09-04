#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    string str = "YES";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0; i<n-1;i++){
        if(arr2[i]>arr2[i+1]+1 && arr1[i]!=arr2[i]){
            cout<<"NO"<<endl;
            return;
        }
        if(arr2[n-1]>arr2[0]+1 && arr1[n-1]!=arr2[n-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
