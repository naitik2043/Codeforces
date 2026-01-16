#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n, k, x;
        cin>>n>>k>>x;

        if(x != 1){
            cout<<"Yes"<<endl;
            cout<< n <<endl;
            for(int i=1; i<=n; i++){
                cout << "1 ";
            }
            cout<<endl;
        } 
        else{
            // x == 1 case
            if(k == 1 || (k == 2 && n % 2 == 1)){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;

                if(n % 2 == 0){
                    int size = n / 2;
                    cout << size << endl;
                    while(size--){
                        cout<<"2 ";
                    }
                    cout<<endl;
                }
                else{
                    // n is odd and k >= 3
                    int size = (n - 3) / 2;
                    cout << size + 1 << endl;
                    while(size--){
                        cout<<"2 ";
                    }
                    cout<<"3"<<endl;
                }
            }
        }
    }

    return 0;
}