#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string s, t;
        cin>>s>>t;

        unordered_map<char, int>freq;
        for(auto ch: t){
            freq[ch]++;
        }

        for(int i=s.size()-1; i>=0; i--){
            if(freq[s[i]] > 0){
                freq[s[i]]--;
            } else{
                s[i] = ' ';
            }
        }

        string m = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ') m+= s[i];
        }

        if(m == t){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }

    return 0;
}