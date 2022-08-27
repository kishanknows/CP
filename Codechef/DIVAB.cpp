#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,a,b,n,start;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a>>b>>n;
	    if(a%b==0)
	        cout<<-1<<'\n';
	    else{
	        if(n%a==0)
	            start = n;
	        else
	            start = n-(n%a)+a;
	        while(start%b ==0){
	            start += a;
	        }
	        cout<<start<<'\n';
	    }
	}
	return 0;
}
