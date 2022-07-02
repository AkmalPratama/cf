#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		set<int> s(a, a+n);
		int unique = s.size();
		for (int k = 1; k <= n; k++) {
			if (k == 1) {
				cout << max(k, unique);
			} else {
				cout << " " << max(k, unique);
			}
		}
		cout << endl;
	}
	return 0;
}
