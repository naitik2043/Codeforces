#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<long long>a(n*k);
        for(int i=0; i<n*k; i++){
            cin>>a[i];
        }

        long long sum = 0;

        int idx = n*k;
        while(k--){
            idx -= n/2 + 1;
            sum += a[idx];
        }

        cout<<sum<<endl;

    }

    return 0;
}