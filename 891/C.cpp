#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n * (n-1) / 2];
	for (int i = 0; i < n * (n-1) / 2; i++) {
		cin >> a[i];
	}
	sort(a, a+(n * (n-1) / 2));
	int N = n * (n-1) / 2;
	if (n == 2) {
		cout << a[0] << " " << a[0] << endl;
		return;
	}
	for (int i = 0; i < N; i+=n) {
		cout << a[i] << ' ';
		n--;
	}
	cout << 1000000000 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

