#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	long long a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	vector<long long> aa(a, a+n);
	vector<long long> bb(b, b+n);
	long long A = 0, B = 0;
	for (int i = 0; i < (2 * n); i++) {
		if ((i%2) == 0) {
			if (!aa.empty() && !bb.empty()) {
				if (aa.back() >= bb.back()) {
					A += aa.back();
					aa.pop_back();
				} else {
					bb.pop_back();
				}
			} else {
				if (aa.empty()) {
					bb.pop_back();
				} else {
					A += aa.back();
					aa.pop_back();
				}
			}
		} else {
			if (!aa.empty() && !bb.empty()) {
				if (aa.back() <= bb.back()) {
					B += bb.back();
					bb.pop_back();
				} else {
					aa.pop_back();
				}
			} else {
				if (bb.empty()) {
					aa.pop_back();
				} else {
					B += bb.back();
					bb.pop_back();
				}
			}
		}
	}
	cout << A-B << endl;
	return 0;
}
