#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a;
		vector<int> b;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if ((i%2) == 0) {
				a.push_back(x);
			} else {
				b.push_back(x);
			}
		}
		bool sameA = true;
		for (int i = 1; i < a.size(); i++) {
			if ((a[0] % 2) != (a[i] % 2)) {
				sameA = false;
			}
		}
		bool sameB = true;
		for (int i = 1; i < b.size(); i++) {
			if ((b[0] % 2) != (b[i] % 2)) {
				sameB = false;
			}
		}
		if (sameA && sameB) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

