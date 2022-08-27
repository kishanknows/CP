#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long count = 0;
    vector<int> vec(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    for(int i=1;i<n;i++){
        count += (vec[i]!=vec[i+1])*(n-i)*i;
    }
    for(int i=0;i<m;i++){
        int ind,x;
        cin>>ind>>x;
        count -= (vec[ind-1]!=vec[ind])*(n-ind+1)*(ind-1);
        count -= (vec[ind]!=vec[ind+1])*(n-ind)*(ind);
        vec[ind] = x;
        count += (vec[ind-1]!=vec[ind])*(n-ind+1)*(ind-1);
        count += (vec[ind]!=vec[ind+1])*(n-ind)*(ind);
        cout<<count + n*(n+1)/2<<endl;
    }
    return 0;
}