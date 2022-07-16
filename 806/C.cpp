#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int buf;
		cin >> buf;
		string s;
		cin >> s;
		for (int j = 0; j < buf; j++) {
			if (s[j] == 'D') {
				a[i]++;
				a[i] = a[i] > 9 ? a[i] - 10 : a[i];
			} else {
				a[i]--;
				a[i] = a[i] < 0 ? a[i] + 10 : a[i];
			}
		}
		if (i == 0)
			cout << a[i];
		else
			cout << " " << a[i];
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

