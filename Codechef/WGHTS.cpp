#include <iostream>
using namespace std;

void solve(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    if(w==x || w==y || w==z){
        cout<<"YES"<<endl;
    }
    else if(w-x == y || w-x == z){
        cout<<"YES"<<endl;
    }
    else if(w-y == x || w-y ==z){
        cout<<"YES"<<endl;
    }
    else if(w-z == x || w-z == y){
        cout<<"YES"<<endl;
    }
    else if(w == x+y+z){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
