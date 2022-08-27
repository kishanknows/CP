#include <iostream>
using namespace std;

int main() {
    int a,b,T;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>a>>b;
	    if(a<b){
	        cout<<a<<'\n';
	    }
	    else cout<<b<<'\n';
	}
	return 0;
}
