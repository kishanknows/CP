#include <iostream>
#include <set>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    string str;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int mini=INT_MAX;
	    cin>>str;
	    for(int j=0;j<n;j++){
	        if(str[j]=='0'){
	            mini = min(mini,arr[j]);
	        }
	    }
	    cout<<mini<<endl;
	}
	return 0;
}
