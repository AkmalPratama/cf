#include <bits/stdc++.h>
using namespace std;

pair<int,int> red(int a, int b) {
	int aa = a;
	int bb = b;
	int sum = 0;
	while (aa >= bb) {
		aa /= 2;
		sum++;
	}
	return make_pair(aa, sum);
}

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
		int sum = 0;
		bool b = false;
		for (int i = n-2; i >= 0; i--) {
			if (a[i] >= a[i+1]) {
				if (a[i+1] == 0) {
					b = true;
					break;
				}
				pair<int, int> p = red(a[i], a[i+1]);
				sum += p.second;
				a[i] = p.first;
			}
		}
		if (b) {
			cout << -1 << endl;
		} else {
			cout << sum << endl;
		}
	}
	return 0;
}

