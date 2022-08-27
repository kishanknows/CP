#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,sum=0,wait=0;
	    cin>>n;
	    int arr[n-1];
	    for(int j=0;j<n-1;j++){
	        cin>>arr[j];
	        sum += arr[j];
	    }
	    int pivot=arr[0];
	    for(int j=1;j<n-1;j++){
	        if((arr[j]-pivot) > 0){
	            wait += arr[j]-pivot;
	            pivot = arr[j];
	        }
	    }
	    sum = sum+wait+arr[0];
	    cout<<sum<<endl;
	}
	return 0;
}
