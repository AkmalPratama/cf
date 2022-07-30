#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, l , r;
		cin >> n >> l >> r;
		vector<int> v;
		int x;
		bool b = true;
		for (int i = 1; i <= n; i++) {
			if (l % i == 0) {
				x = l;
			} else {
				x = ((l/i)+1)*i;
				if (x > r) {
					b = false;
					break;
				}
			}
			v.push_back(x);
		}
		if (b) {
			cout << "YES\n";
			for (int i: v) {
				cout << i << " ";
			}
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}

