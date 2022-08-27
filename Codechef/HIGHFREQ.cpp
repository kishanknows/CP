#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    map<int,int> mp;
	    map<int,int>::iterator it;
	    for(int j=0;j<n;j++){
	        if(mp.empty()){
	            mp.insert({arr[j],1});
	        }
    	    else{
    	        it = mp.find(arr[j]);
    	        if(it == mp.end()){
    	            mp.insert({arr[j],1});
    	        }
    	        else{
    	            it->second++;
    	        }
    	    }    
	    }
	    int max=-1;
	    for(auto itr=mp.begin();itr!=mp.end();itr++){
	        if((itr->second)>max){
	            max = itr->second;
	        }
	    }
	    for(auto itr=mp.begin();itr!=mp.end();itr++){
	        if(itr->second==max){
	            itr->second=max-(max/2);
	            break;
	        }
	    }
	    max=-1;
	    for(auto itr=mp.begin();itr!=mp.end();itr++){
	        if((itr->second)>max){
	            max = itr->second;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
