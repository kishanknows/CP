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
	    map<int,int> mp;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        if(mp.empty()){
	            mp.insert({arr[j],1});
	        }
	        else{
	            auto itr = mp.find(arr[j]);
	            if(itr==mp.end()){
	                mp.insert({arr[j],1});
	            }
	            else{
	                itr->second++;
	            }
	        }
	    }
	    int dominant=-1;
	    int count = 0;
	    for(auto it=mp.begin();it!=mp.end();it++){
	        dominant = max(dominant,it->second);
	    }
	    for(auto it=mp.begin();it!=mp.end();it++){
	      
	        if(it->second==dominant){
	            count++;
	        }
	    }
	    if(count==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
