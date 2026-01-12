#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(k == 1){
            vector<int> sorted_arr = arr;
            sort(sorted_arr.begin(), sorted_arr.end());
            if(arr == sorted_arr){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}