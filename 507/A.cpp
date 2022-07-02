#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, a, b;
	cin >> n >> a >> b;
	int c[n];
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	if (n == 1) {
		if (c[0] == 2) {
			cout << ((a < b) ? a : b) << endl;;
		} else {
			cout << 0 << endl;
		}
		return 0;
	}
	for (int i = 0; i < n/2; i++) {
		if (c[i] != c[(n-1)-i] && c[i] != 2 && c[(n-1)-i] != 2) {
			cout << -1 << endl;
			return 0;
		}
	}
	int least_value = ((a < b) ? 0 : 1);
	int least_cost = ((least_value == 0) ? a : b);
	int sum = 0;
	for (int i = 0; i < n/2; i++) {
		if (c[i] == 2) {
			if (c[(n-1)-i] != 2) {
				sum += ((c[(n-1)-i] == 0) ? a : b);
			} else {
				sum += 2 * least_cost;
			}
		} else {
			if (c[(n-1)-i] == 2) {
				sum += ((c[i] == 0) ? a : b);
			}
		}
	}
	if ((n%2) != 0 && c[n/2] == 2) {
		sum += least_cost;
	}
	cout << sum << endl;
	return 0;
}
