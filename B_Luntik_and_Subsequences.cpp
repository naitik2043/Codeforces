#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }

        long long oneCount = 0;
        long long zeroCount = 0;

        for(long long i=0; i<n; i++){
            if(a[i] == 1){
                oneCount++;
            }
            else if(a[i] == 0){
                zeroCount++;
            }
        }

        long long ways = pow(2, zeroCount)*oneCount;
        cout<<ways<<endl;
    }

    return 0;
}