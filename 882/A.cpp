#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k, ans = 0;
	cin >> n >> k;
	vector<int> v(n), w(n-1);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n-1; i++) {
		w[i] = abs(v[i+1] - v[i]);
		ans += w[i];
	}
	sort(w.begin(), w.end());
	k--;
	int j = n-2;
	while (k--) {
		ans -= w[j];
		j--;
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

