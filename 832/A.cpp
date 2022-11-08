#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		long long l;
		cin >> l;
		sum += l;
	}
	cout << abs(sum) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

