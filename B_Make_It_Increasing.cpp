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

        int ed = n-1;
        int op =0;
        while(ed > 0){            
            while(a[ed-1] >= a[ed] && a[ed-1]>0){
                a[ed-1] = a[ed-1]/2;
                op++;
            }

            if(a[ed-1] ==0 && a[ed] == 0){
                op = -1;
                break;
            }
            
            ed--;
        }

        cout<<op<<endl;
    }

    return 0;
}