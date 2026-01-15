#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = abs(arr[i]);
    }

    sort(arr.begin(), arr.end());
    cout<<arr[0];   

    return 0;
}