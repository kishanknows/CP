#include <iostream>
using namespace std;

int divider(int x,int cnt){
    int power=1;
    while(x>power){
        power= power*2;
    }
    if(x==power){
        return cnt;
    }
    // if(x-power/2==0 || x-power/2 ==1){
    //     return cnt;
    // }
    cnt++;
   
    return divider(x-power/2,cnt);
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    int count=0;
	    cin>>n;
	    cout<<divider(n,count)<<endl;
	    
	}
	return 0;
}
