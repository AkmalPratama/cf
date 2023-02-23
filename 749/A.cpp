#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int x) {
	if (x <= 1) {
		return false;
	}
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int &x: a) {
		cin >> x;
		sum += x;
	}
	if (!isPrime(sum)) {
		cout << n << endl;
		for (int i = 0; i < n; i++) {
			cout << i+1 << " ";
		}
		cout << endl;
		return;
	}
	if (sum % 2) {
		cout << n - 1 << endl;
		bool b = false;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2) {
				if (b) {
					cout << i+1 << " ";
				} else {
					b = !b;
				}
			} else {
				cout << i+1 << " ";
			}
		}
		cout << endl;
		return;
	}
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << i+1 << " ";
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
