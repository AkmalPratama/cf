#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = i+1;
	}
	if (n % 2 == 1) {
		for (int i = 0; i < n/2; i++) {
			swap(v[2*i+1], v[(i+1)*2]);
		}
	} else {
		for (int i = 0; i < n/2; i++) {
			swap(v[2*i], v[2*i+1]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cout << v[i];
		} else {
			cout << " " << v[i];
		}
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

