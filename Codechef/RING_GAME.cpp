#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    long long moves = 0;
    long long count0=0,count1=0,max0=0,max1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==0 && arr[i+1]==0){
            count0++;
        }
        else{
            max0 += count0;
            count0 = 0;
        }
    }
    max0 += count0;
    if(arr[n-1]==0 && arr[0]==0){
        max0++;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==1 && arr[i+1]==1){
            count1++;
        }
        else{
            max1 += count1;
            count1 = 0;
        }
    }
    max1 += count1;
    if(arr[n-1]==1 && arr[0]==1){
        max1++;
    }
    moves = min(max1,max0);
    if(moves%2 == 0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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
