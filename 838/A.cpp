#include <bits/stdc++.h>
using namespace std;

int f(int x) {
	int cnt = 0;
	if (x % 2 == 1) {
		while (x % 2 == 1) {
			x /= 2;
			cnt++;
		}
	} else {
		while (x % 2 == 0) {
			x /= 2;
			cnt++;
		}
	}
	return cnt;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	bool oddeven = false;
	bool evenodd = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] % 4 == 1) {
			oddeven = true;
		}
		if (a[i] % 4 == 2) {
			evenodd = true;
		}
	}
	if (sum % 2 == 0) {
		cout << 0 << endl;
		return;
	}
	if (oddeven || evenodd) {
		cout << 1 << endl;
		return;
	}
	
	for (int i = 1; i < n; i++) {
		
	}
	int x = a[0];
	int ans = f(x);
	for (int i = 1; i < n; i++) {
		ans = min(ans, f(a[i]));
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

