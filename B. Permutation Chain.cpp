#include <iostream>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    for(int i=0;i<t;i++){
	        int n;
	        cin>>n;
	        cout<<n<<endl;
	        int arr[n];
	        for(int j=0;j<n;j++){
	            arr[j]=j+1;
	        }
	        for(int j=0;j<n;j++){
	            for(int k=0;k<n;k++){
	                cout<<arr[k]<<" ";
	            }
	            cout<<endl;
	            int temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
	        }
	     }
	return 0;
}
