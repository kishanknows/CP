#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(mp.empty()){
            mp.insert({arr[i],1});
            count++;
        }
        else{
            if(mp.find(arr[i])==mp.end()){
                mp.insert({arr[i],1});
                count++;
            }
            else{
                break;
            }
        }
    }
    cout<<n-count<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
