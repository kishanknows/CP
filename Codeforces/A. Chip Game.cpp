#include <iostream>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if((n%2 ==0 && m%2 == 0)||(n%2 != 0 && m%2 !=0)){
        cout<<"Tonya"<<endl;
    }
    else{
        cout<<"Burenka"<<endl;
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
