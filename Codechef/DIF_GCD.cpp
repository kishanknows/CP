#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	for(int i =0;i<t;i++){
	    cin>>n>>m;
	    int a = n;
	    int b = m-(m%n);
	    int indiff=m%n;
	    for(int j=1;j<=indiff;j++){
	        if(abs((n+j)-(m-(m%(n+j))))>abs(a-b)){
	            a = n+j;
	            b = m-(m%(n+j));
	        }
	    }
	    cout<<a<<' '<<b<<endl;
	}
	return 0;
}
