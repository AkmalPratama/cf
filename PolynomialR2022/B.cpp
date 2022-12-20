#include <bits/stdc++.h>
using namespace std;

string solve() {
	long long n, m, k;
	vector<long long> v;
	cin >> n >> m >> k;
	for (long long i = 0; i < m; i++) {
		long long x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	if ((v.back() - 1) * k + 1 > n) {
		return "NO";
	}
	long long cnt = 0;
	for (int x: v) {
		if (x == v.back()) {
			cnt++;
		}
	}
	if ((cnt > (n % k)) && (v.back() > n / k)) {
		return "NO";
	}
	return "YES";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

