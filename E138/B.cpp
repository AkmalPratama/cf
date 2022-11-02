#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	long long sum = 0;
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		sum += x;
	}
	long long max = 0;
	for (long long i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if (max < x) {
			max = x;
		}
		sum += x;
	}
	cout << sum - max << endl;
}

int main() {
    long long t; cin >> t;
    while (t--) {
    	solve();
	}
    return 0;
}
