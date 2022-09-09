#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    multiset<int> s1;
    multiset<int> s2;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s1.insert(val);
    }
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s2.insert(val);
    }
    int count = 0;
    while(!s1.empty()){
        // cout<<*prev(s1.end())<<"  "<<*prev(s2.end())<<endl;
        if(*prev(s1.end())== *prev(s2.end())){
            s1.erase(prev(s1.end()));
            s2.erase(prev(s2.end()));
        }
        else if(max(*prev(s1.end()),*prev(s2.end()))== *prev(s1.end())){
            int val = floor(log10(*prev(s1.end())))+1;
            s1.erase(prev(s1.end()));
            s1.insert(val);
            count++;
        }
        else{
            int val = floor(log10(*prev(s2.end())))+1;
            s2.erase(prev(s2.end()));
            s2.insert(val);
            count++;
        }
    }
    // cout<<"--------------------------"<<endl;
    cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
