#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		int maxCnt, maxF, curCnt;
		maxCnt = 1;
		maxF = a[0];
		curCnt = 1;
		for (int i = 1; i < n; i++) {
			if (a[i] == a[i-1]) {
				curCnt++;
			} else {
				if (curCnt > maxCnt) {
					maxCnt = curCnt;
					maxF = a[i-1];
				}
				curCnt = 1;
			}
		}
		if (curCnt > maxCnt) {
			maxCnt = curCnt;
			maxF = a[n-1];
		}
		if (maxCnt == n) {
			cout << 0 << endl;
		} else {
			int step = 0;
			while (maxCnt < n) {
				step += 1 + maxCnt;
				maxCnt *= 2;
			}
			if (maxCnt > n) {
				step -= (maxCnt - n);
			}
			cout << step << endl;
		}
	}
	return 0;
}

