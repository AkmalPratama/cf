#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int maxNum = (1 << 30) - 1;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x != i) {
				maxNum &= x;
			}
		}
		cout << maxNum << endl;
		
	}
	return 0;
}

