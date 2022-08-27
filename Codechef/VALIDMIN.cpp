#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int m1,m2,m3;
	    cin>>m1>>m2>>m3;
	    if(m1<m2 && m1<m3){
	        cout<<"NO"<<endl;
	    }
	    else if(m2<m1 && m2<m3){
	        cout<<"NO"<<endl;
	    }
	    else if(m3<m1 && m3<m2){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
