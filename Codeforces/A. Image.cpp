#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    set<char> s;
    s.insert(s1[0]);
    s.insert(s1[1]);
    s.insert(s2[0]);
    s.insert(s2[1]);
    cout<<s.size()-1<<endl;
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
