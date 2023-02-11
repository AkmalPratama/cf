#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	ll forward[n+1];
	ll backward[n+1];
	forward[0] = 0;
	backward[n] = 0;
	for (int i = 1; i < n+2; i++) {
    	forward[i] = forward[i-1] + max(a[i-1] - a[i], forward[0]);
	}
	for (int i = n-1; i >= 0; i--) {
    	backward[i] = backward[i+1] + max(a[i+1] - a[i], backward[n]);
	}
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		if (s < t) {
			cout << forward[t-1] - forward[s-1] << endl;
		} else {
			cout << backward[t-1] - backward[s-1] << endl;
		}
	}
    return 0;
}
