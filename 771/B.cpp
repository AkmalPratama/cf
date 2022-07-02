#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		bool same = true;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				same = false;
				break;
			}
		}
		if (same) {
			cout << "YES" << endl;
		} else {
			vector<int> evenA, evenB;
			for (int i = 0; i < n; i++) {
				if ((a[i] % 2) == 0) {
					evenA.push_back(a[i]);
				}
			}
			for (int i = 0; i < evenA.size(); i++) {
				evenB.push_back(evenA[i]);
			}
			sort(evenB.begin(), evenB.end());
			bool sameEven = true;
			for (int i = 0; i < evenB.size(); i++) {
				if (evenA[i] != evenB[i]) {
					sameEven = false;
				}
			}
			if (!sameEven) {
				cout << "NO" << endl;
			} else {
				vector<int> oddA, oddB;
				for (int i = 0; i < n; i++) {
					if ((a[i] % 2) == 1) {
						oddA.push_back(a[i]);
					}
				}
				for (int i = 0; i < oddA.size(); i++) {
					oddB.push_back(oddA[i]);
				}
				sort(oddB.begin(), oddB.end());
				bool sameOdd = true;
				for (int i = 0; i < oddB.size(); i++) {
					if (oddA[i] != oddB[i]) {
						sameOdd = false;
					}
				}
				if (!sameOdd) {
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			}
		}
	}
	return 0;
}
