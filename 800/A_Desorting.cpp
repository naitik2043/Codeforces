#include <bits/stdc++.h>
using namespace std;
void sol(){
int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int diff =INT_MAX;
    if(!is_sorted(a.begin(),a.end())){
        cout<<0<<endl;
    }else{
    for(int i=0;i<n-1;i++){
        
        diff = min(diff,a[i+1] - a[i]);
    }
    int ans = diff/2  +1;
    cout<<ans<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        sol();
      
    }
        return 0;
    }