#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<int> v(n, 0);
	if (k % 2) {
		for (int i = 0; i < n; i++) {
			if (s[i] == '1' && k) {
				v[i] = 1;
				k--;
			} else {
				s[i] = '1' - (s[i] - '0');
			}
		}
		if (k > 0) {
			if (k % 2) {
				s[n-1] = '1' - (s[n-1] - '0');
			}
			v[n-1] += k;
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (s[i] == '0' && k) {
				s[i] = '1';
				v[i] = 1;
				k--;
			}
		}
		if (k > 0) {
			v[n-1] += k;
			if (k % 2) {
				s[n-1] = '1' - (s[n-1] - '0');
			}
		}
	}
	cout << s << endl;
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
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

