#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, l;
	cin >> n >> l;
	vector<bitset<30> > v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		bitset<30> b(x);
		v.push_back(b);
	}
	bitset<30> init;
	for (int i = 0; i < 30; i++) {
		int one = 0;
		int zer = 0;
		for (int j = 0; j < n; j++) {
			if (v[j][i] == 0) {
				zer++;
			} else {
				one++;
			}
		}
		if (zer > one) {
			init[i] = 0;
		} else {
			init[i] = 1;
		}
	}
	cout << init.to_ulong() << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
