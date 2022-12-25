#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	ll n, q;
	cin >> n >> q;
	ll a[n];
	ll sum = 0;
	ll prev2 = -1;
	ll prev2x = -1;
	ll prev1[n];
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		prev1[i] = 0;
	}
	for (ll i = 0; i < q; i++) {
		ll t;
		cin >> t;
		if (t == 1) {
			ll idx, x;
			cin >> idx >> x;
			idx--;
			
			if (prev1[idx] > prev2) {
				sum += x - a[idx];
			} else {
				sum += x - prev2x;
			}
			prev1[idx] = i;
			a[idx] = x;
		} else {
			ll x;
			cin >> x;
			sum = n * x;
			prev2 = i;
			prev2x = x;
		}
		cout << sum << endl;
	}
	return 0;
}

