#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long A = a[0];
        for(int i=1; i<n; i++){
            A = A^a[i];
        }

        if(n%2 != 0){
            cout<<A<<endl;
        } else{
            if(A==0){
                cout<<A<<endl;
            } else{
                cout<<-1<<endl;
            }
            
        }

    }

    return 0;
}