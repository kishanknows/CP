#include <iostream>
#include <cstring>
using namespace std;

void solve(){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    long long ans[n];
    memset(ans,0,sizeof(ans));
    if(s>=k*b && s <= k*b+n*(k-1)){
        if(s<(b+1)*k){
            ans[0] = s;
            for(int i =0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            ans[0] = (b+1)*k - 1;
            s = s - ans[0];
            int index = 1;
            while(s>k-1){
                ans[index] = k-1;
                s = s - ans[index];
                index++;
            }
            if(s>0)
                ans[index] = s;
            for(int i =0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
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
