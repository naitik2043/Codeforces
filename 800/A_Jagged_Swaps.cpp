#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n; i++){
            cin >> arr[i] ;
        }
        vector<int>arr1=arr;
        sort(arr1.begin(), arr1.end());
        if(arr1 == arr){
           cout<<"YES"<<endl;
           continue;

        }
        while(n--){
            for(int i=1; i<n; i++){
                if(i> 0 && (arr[i-1] < arr[i])&& (arr[i] > arr[i+1])){
                    swap(arr[i],arr[i+1]);
                }
            }
        }

        if(arr1 == arr){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}