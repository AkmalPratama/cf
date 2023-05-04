#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
	int n;
	cin >> n;
	ll a[n];
	ll cnt = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		while (a[i] % 2 == 0) {
			cnt++;
			a[i] /= 2;
		}
		sum += a[i];
	}
	sort(a, a+n);
	sum -= a[n-1];
	sum += a[n-1] * (ll)pow(2, cnt);
	return sum;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}
