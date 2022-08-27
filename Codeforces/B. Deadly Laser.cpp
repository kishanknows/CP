#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,m,x,y,d;
   cin>>n>>m>>x>>y>>d;
   if((abs(1-x)>d && abs(y-m)>d)||(abs(1-y)>d && abs(x-n)>d)){
       cout<<n+m-2<<endl;
   }
   else{
       cout<<-1<<endl;
   }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
