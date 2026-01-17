#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int zero =0;
        int blank = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                zero++;
                blank = max(blank, zero);
            } else{
                zero =0;
            }
        }

        cout<<blank<<endl;        
    }

    return 0;
}