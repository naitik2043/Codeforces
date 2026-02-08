#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int> p(n);

		for(int i = 0; i < n; i++){
			cin >> p[i];
		}

		int k = p[0] - 1;
		for(int i = 1; i < n; i++){
			int idx = i + 1;
			k = gcd(k, abs(p[i] - idx));
		}

		cout << k << endl;
	}

	return 0;
}