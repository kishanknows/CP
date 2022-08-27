#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c,d,sum1=0,sum2=0;
	    cin>>a>>b>>c>>d;
	    sum1 = (a<b)?b:a;
	    sum2 = (c<d)?d:c;
	    cout<<sum1+sum2<<endl;
	}
	return 0;
}
