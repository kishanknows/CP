#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    int index=0;
	    int num=0,flag=0;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        if(num<arr[j]){
	            num = arr[j];
	            index = j;
	        }
	    }
	    if(index==0){
	        for(int j=0;j<n-1;j++){
	            if(arr[j]<arr[j+1]){
	                flag = -1;
	            }
	        }
	    }
	    else if(index == n-1){
	        for(int j=0;j<n-1;j++){
	            if(arr[j]>arr[j+1]){
	                flag = -1;
	            }
	        }
	    }
	    else{
	        for(int j=0;j<index;j++){
	            if(arr[j]>arr[j+1]){
	                flag = -1;
	            }
	        }
	        for(int j=index;j<n-1;j++){
	            if(arr[j]<arr[j+1]){
	                flag = -1;
	            }
	        }
	    }
	    if(flag == -1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
