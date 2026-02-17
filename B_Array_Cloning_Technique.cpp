#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0; i<n; i ++){
            cin>>a[i];
        }

        unordered_map<int, int>freq;
        for(int p: a){
            freq[p]++;
        }

        int maxFreq = 0;
        for(auto p: freq){
            maxFreq = max(maxFreq, p.second);
        }

        int op =0;
        while(maxFreq < n){
            op++;
            if(maxFreq *2 <= n){
                op += maxFreq;
                maxFreq *= 2;
            } else{
                op += (n - maxFreq);
                maxFreq = n;
            }
        }

        cout<<op<<endl;

    }

    return 0;
}