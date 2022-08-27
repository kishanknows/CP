#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x,y;
	    cin>>n>>x>>y;
	    vector<int> vec(n);
	    for(int j=0;j<n;j++){
	        cin>>vec[j];
	    }
	    sort(vec.begin(),vec.end());
	    int a,index,j=0;
	    long long minx = LLONG_MAX;
	    while(minx>vec[j] && j<n && j<y){
	        if(minx>(vec[j]^x)){
	            minx = vec[j]^x;
	            a=vec[j];
	            index = j;
	        }
	        vec[j] = vec[j]^x;
	        j++;
	    }
	    if(y==j){
	        sort(vec.begin(),vec.end());
	        for(int k=0;k<n;k++){
	            cout<<vec[k]<<" ";
	        }
	    }
	   else if((y-j)%2 == 0){
	        sort(vec.begin(),vec.end());
	        for(int k=0;k<n;k++){
	            cout<<vec[k]<<" ";
	        }
	    }
	    else{
	        vec[index] = a;
	        sort(vec.begin(),vec.end());
	        for(int k=0;k<n;k++){
	            cout<<vec[k]<<" ";
	        }
	    }
	    cout<<endl;
	}
	
	return 0;
}
