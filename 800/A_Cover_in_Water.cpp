#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '.') ans++;
            if(i<= n-3 && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                ans =2; break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}