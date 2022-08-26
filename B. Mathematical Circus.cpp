#include <iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(k%4 == 0){
        cout<<"NO"<<endl;
    }
    else{
        if(k%2 == 0){
            cout<<"YES"<<endl;
            int odd = 1;
            for(int i=k%4;i<=n;i+=4){
                cout<<i<<" "<<odd<<endl;
                odd += 2;
            }
            for(int i=1;i<=n/4;i++){
                cout<<odd<<" "<<4*i<<endl;
                odd += 2;
            }
        }
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i+=2){
                cout<<i<<" "<<i+1<<endl;
            }
        }
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
