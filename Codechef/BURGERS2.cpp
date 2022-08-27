#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,x,y,n,r;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y>>n>>r;
	    if(r<n*x){
	        cout<<-1<<'\n';
	    }
	    else if(y*n<r){
	        cout<<0<<' '<<n<<'\n';
	    }
	    else{
	        int y_out = floor((r-n*x)/(y-x));
	        int x_out = n-y_out;
	        cout<<x_out<<' '<<y_out<<'\n';
	    }
	    
	}
	return 0;
}
