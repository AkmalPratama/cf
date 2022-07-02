#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	bool b = true;
	cin >> n;
	int w[n], h[n];
	for (int i = 0; i < n; i++) {
		cin >> w[i] >> h[i];
		if (w[i] > h[i]) {
			swap(w[i], h[i]);
		}
	}
	int ptr = h[0];
	for (int i = 1; i < n; i++) {
		if (ptr >= h[i]) {
			ptr = h[i];
		} else if (ptr >= w[i]) {
			ptr = w[i];
		} else {
			b = false;
		}
	}
	if (b) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

