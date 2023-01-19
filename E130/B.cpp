#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, q;
    cin >> n >> q;
    ll a[n], b[n+1];
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	sort(a, a+n);
	b[0] = 0;
	for (int i = 1; i < n+1; i++) {
		b[i] = b[i-1] + a[i-1];
	}
	for (int i = 0; i < q; i++) {
		ll x, y;
		cin >> x >> y;
		cout << b[n-x+y] - b[n-x] << endl;
	}
    return 0;
}

