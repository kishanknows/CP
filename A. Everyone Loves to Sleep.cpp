#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,a,b,ans=INT_MAX;
	    cin>>n>>a>>b;
	    int t1 = a*60 + b;
	    for(int j=0;j<n;j++){
	        int h,m;
	        cin>>h>>m;
	        int t2 = h*60 + m;
	        if(t2-t1<0){
	            t2 = t2 + 24*60;
	        }
	        ans = min(ans,t2-t1);
	    }
	    cout<<ans/60<<" "<<ans%60<<endl;
	}
	return 0;
}
