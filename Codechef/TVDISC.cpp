#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a-c)<(b-d)){
	        cout<<"First"<<endl;
	    }
	    else if((a-c)>(b-d)){
	        cout<<"Second"<<endl;
	    }
	    else{
	        cout<<"Any"<<endl;
	    }
	}
	return 0;
}
