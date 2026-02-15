#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        if(n%2 != 0 || n<4){
            cout<<-1<<endl;
            continue;
        }
        if(n/6 != 0){
            cout<< n / 6 <<" "<< n / 4 << endl;
        } else{
            cout<< n / 4 <<" "<< n / 4 << endl;
        }
        
    }

    return 0;
}