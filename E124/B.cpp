#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
		int a[19];
		a[0] = 1;
		for (int i = 1; i < 19; i++) {
			a[i] = a[i-1] * 3;
		}
    	if (n > 19) {
    		cout << "NO\n";
		} else {
			cout << "YES\n";
			cout << 1;
			for (int i = 1; i < n; i++) {
				cout << " " << a[i];
			}
			cout << endl;
		}
	}
    return 0;
}
