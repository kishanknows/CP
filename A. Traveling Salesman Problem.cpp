#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int minx = 0, maxx = 0;
	    int miny = 0, maxy = 0;
	    for(int j=0;j<n;j++){
	        int a,b;
	        cin>>a>>b;
	        minx = min(minx,a);
	        maxx = max(maxx,a);
	        miny = min(miny,b);
	        maxy = max(maxy,b);
	    }
	    cout<<2*(abs(minx)+maxx+abs(miny)+maxy)<<endl;
	}
	return 0;
}
