#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	set<int> s;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		s.insert(b);
	}
	int mid;
	for (int i = 1; i <= n; i++) {
		if (!s.count(i)) {
			mid = i;
			break;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i != mid) {
			cout << i << " " << mid << endl;
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
