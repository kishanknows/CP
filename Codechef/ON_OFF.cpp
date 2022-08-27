#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,initial=1;
	    cin>>n;
	    string S;
	    string R;
	    cin>>S;
	    cin>>R;
	    for(int j=0;j<n;j++){
	        if(S[j]!=R[j]){
	            initial=!initial;
	        }
	    }
	    cout<<initial<<endl;
	}
	return 0;
}
