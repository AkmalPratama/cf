#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, r;
	cin >> n >> r;
	int a[n+r+r], cnt = 1;
	bool b = true;
	for (int i = 0; i < n+r+r; i++) {
		if (i < n) {
			cin >> a[i];
		} else {
			a[i] = 0;
		}
	}
	int ilum = 0;
	for (int i = r-1; i >= 0; i--) {
		if (i == 0 && a[i] == 0) {
			b = false;
		} else {
			if (a[i] == 1) {
				ilum = i;
				break;
			}
		}
	}
	if (b) {
		for (int i = ilum; i < n; i++) {
			ilum = -1;
			for (int j = i+1; j < i+r+r; j++) {
				if (a[j] == 1) {
					ilum = j;
				}
			}
			if (i+r >= n) {
				b = true;
				break;
			}
			if (ilum == -1) {
				b = false;
			} else {
				i = ilum-1;
				cnt++;
			}
		}
	}
	if (b) {
		cout << cnt << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
