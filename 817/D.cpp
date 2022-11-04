#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	string s;
	cin >> n;
	cin >> s;
	vector<long long> v, res;
	long long a[n];
	long long opt[n];
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		if (s[i] == 'R') {
			a[i] = n - 1 - i;
		} else {
			a[i] = i;
		}
		sum += a[i];
	}
	for (long long i = 0; i < n; i++) {
		opt[i] = max(i, n - 1- i);
		v.push_back(opt[i] - a[i]);
	}
	sort(v.begin(), v.end());
	for (long long i = n-1; i >= 0; i--) {
		sum += v[i];
		res.push_back(sum);
	}
	for (long long i = 0; i < res.size(); i++) {
		if (i == 0) {
			cout << res[i];
		} else {
			cout << " " << res[i];
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

