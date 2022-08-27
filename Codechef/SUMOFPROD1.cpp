#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    int pro=0;
	    long long sum=0;
	    cin>>n;
	    int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    for(int k=0;k<n;k++){
	       pro = pro*arr[k] + arr[k];
	       sum+=pro;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
