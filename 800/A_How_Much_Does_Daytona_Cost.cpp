#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int p=0;

        int st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(arr[mid] == k){
                p =1;
                break;
            } else if(arr[mid] > k){
                end = mid - 1;
            } else{
                st = mid + 1;
            }
        }

        if(p==1){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}