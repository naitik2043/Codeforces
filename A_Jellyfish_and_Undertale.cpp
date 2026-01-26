#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a, b, n;
        cin>>a>>b>>n;

        vector<long long>x(n);
        for(int i=0; i<n; i++){
            cin>>x[i];
        }

        sort(x.begin(), x.end(), greater<long long>());

        long long c = b;
        long long i = 0, ans = 0;

        for(int i=0; i<n; i++){
            if(c<=0) break;
            
            if(c>1){
                ans+= c-1;
                c=1;
            }
            c= min(c+x[i], a);
            c--;
            ans++;
        }

        if(c>0) ans+=c;

        cout<<ans<<endl;
    }

    return 0;
}