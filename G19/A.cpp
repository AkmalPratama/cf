#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a+n);
		bool same = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				same = false;
				break;
			}
		}
		if (same) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}
