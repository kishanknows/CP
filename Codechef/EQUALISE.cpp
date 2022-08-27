#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    while(x){
	        if(x%2 != 0){
	            break;
	        }
	        x = x/2;
	    }
	    while(y){
	        if(y%2 != 0){
	            break;
	        }
	        y = y/2;
	    }
	    if(x==y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
