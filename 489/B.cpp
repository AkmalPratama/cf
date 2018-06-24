#include <bits/stdc++.h>

using namespace std;

map<int, int> m;

int gcd(int a, int b) {
	if (a == 0) {
		return b;
	}
	return gcd(b%a, a);
}

void cntPair(int g, int l) {
	int cnt = 0;
	int p = g * l;
	for (int i = 1; i <= l; i++) {
		if (!(p%i) && gcd(i, p/i) == g) {
			m.insert(pair<int, int>(i, (p/i)));
		}
	}
}

int main () {
	int l, r, x, y;
	int cnt = 0;
	cin >> l >> r >> x >> y;
	cntPair(x, y);
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); ++it) {
//		cout << it->first << " " << it->second << endl;
		if ((l <= it->first && it->first <= r) && (l <= it->second && it->second <= r)) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
