#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int fuel = -arr[0];
        int f=0;
        f = min(f, fuel);
        fuel += arr[0];
        for(int i=1; i<n; i++){
            int p = arr[i] - arr[i-1];
            fuel -=p;
            f = min(f , fuel);
            fuel += p;
        }
        fuel -= 2*(x-arr[n-1]);
        f= min(f, fuel);
                 
    
        f = abs(f);
        cout<<f<<endl;
    }
    return 0;
}