#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long a[n];
		long long b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		long long sum = 0;
		for (int i = 0; i < n-1; i++) {
			if ((abs(a[i] - a[i+1]) + abs(b[i] - b[i+1])) > (abs(a[i] - b[i+1]) + abs(b[i] - a[i+1]))) {
				swap(a[i+1], b[i+1]);
			}
			sum += abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]);
		}
		cout << sum << endl;
	}
	return 0;
}
