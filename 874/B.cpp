#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> a;
	int b[n];
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(make_pair(x, i));
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b, b+n);
	int ans[n];
	for (int i = 0; i < n; i++) {
		ans[a[i].second] = b[i];
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
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

