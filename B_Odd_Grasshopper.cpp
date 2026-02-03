#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x, n;
        cin>>x>>n;

        // for(int i=1; i<=n; i++){
        //     if(x % 2 != 0){
        //         x+=i;
        //     } else{
        //         x-=i;
        //     }
        // }

        long long jump;
        
        if(n % 4 == 0){
            jump = 0;
        } else if(n % 4 == 1){
            jump = -n;
        } else if(n % 4 == 2){
            jump = 1;
        } else{
            jump = n+1;
        }

        if(x % 2 == 0){
            x += jump;
        } else{
            x -= jump;
        }

        cout<<x<<endl;
    }

    return 0;
}