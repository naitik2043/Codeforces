#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int st = 0, ed = n-1;
        while(st <= ed){
            if((s[st] == '0' && s[ed] == '1') || (s[st] == '1' && s[ed] == '0')){
                st++;
                ed--;
            } else{
                break;
            }
        }

        cout<<n-2*st<<endl;
    }

    return 0;
}