#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x;
	    cin>>x;
	    if(x < 5){
	        cout<<"NO"<<endl;
	        goto here;
	    }
	    else{
	        for(int j=3;j<=((4+x)/j);j++){
    	        if((4+x)%j==0 && ((4+x)/j)>2){
    	            cout<<"YES"<<endl;
    	            goto here;
    	            break;
    	        }
    	    }
	    }
	    cout<<"NO"<<endl;
	    here:;
	    
	}
	return 0;
}
