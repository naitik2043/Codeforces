#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        bool ok = false;
        for(int i =0; i<n-1; i++){
            for(int j =i+1; j<n; j++){
                if(__gcd(a[i], a[j]) <=2){
                    ok = true;
                    break;
                }
            }
        }

        if(ok) cout<<"Yes\n";
        else cout<<"No\n";

    }

    return 0;
}