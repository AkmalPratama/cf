#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int a[n];
    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		int m;
    	cin >> m;
    	long long idx = 0;
    	for (int i = 0; i < m; i++) {
    		long long x;
    		cin >> x;
    		idx += x % n;
		}
		cout << a[idx%n] << endl;
	}
    return 0;
}
