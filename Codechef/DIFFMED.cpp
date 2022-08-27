#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    vector<int> vec(n);
	    for(int j=0;j<n;j++){
	        vec[j]=j+1;
	    }
	    if(vec.size()%2==0){
	        while(!vec.empty()){
    	        cout<<vec[(vec.size())/2]<<" ";
    	        vec.erase(vec.begin()+(vec.size())/2);
    	    }
	    }
	    else{
	        while(!vec.empty()){
    	        cout<<vec[(vec.size()-1)/2]<<" ";
    	        vec.erase(vec.begin()+(vec.size()-1)/2);
    	    }
	    }
	    cout<<endl;
	}
	return 0;
}
