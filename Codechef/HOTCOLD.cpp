#include <iostream>
using namespace std;

int main() {
	int t,temp;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>temp;
	    if(temp>20){
	        cout<<"HOT"<<endl;
	    }
	    else{
	        cout<<"COLD"<<endl;
	    }
	}
	return 0;
}
