#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
        }

        int pos =0; 
        int neg =0;

        for(int i=0; i<n-1; i++){
            if(arr[i] >= 0){
                pos += arr[i];
            } else{
                neg += arr[i];
            }
        }

        if(abs(neg) > pos){
            int p = abs(neg);
            cout<<p-pos<<endl;
        } else if(abs(neg) <= pos){
            int p = pos+neg;
            cout<< -p<<endl;
        }
    }

    return 0;
}