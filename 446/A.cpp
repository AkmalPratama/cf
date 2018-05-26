#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int n, idx_b1 = 0;
	long long sum_a = 0;
	long long max_b1;
	long long max_b2;
	cin >> n;
	
	long long a[n];
	long long b[n];
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum_a += a[i];
	}
	cin >> b[0];
	max_b1 = b[0];
	for (int i = 1; i < n; i++) {
		cin >> b[i];
		if (max_b1 < b[i]) {
			max_b1 = b[i];
			idx_b1 = i;
		}
	}
	max_b2 = -1;
	for (int i = 0; i < n; i++) {
		if ((max_b2 < b[i]) && (i != idx_b1)) {
			max_b2 = b[i];
		}
	}
	//cout << sum_a << max_b1 << max_b2 << endl;
	max_b1 += max_b2;
	if (max_b1 >= sum_a) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
