#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool mid(int a, int b, int c) {
	bool ret = false;
	if ((c - a) % 2 == 0)  {
		int x = a + (c-a) / 2;
		if (x % b == 0) {
			ret = true;
		}
	}
	return ret;
}

bool side(int a, int b, int c) {
	bool ret = false;
	int x = 2 * b - c;
	if (x && (x % a == 0) && x > a) {
		ret = true;
	}
	return ret;
}

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	bool ans = false;
	
	ans = ans || mid(a, b, c);
	ans = ans || mid(c, b, a);
	ans = ans || side(a, b, c);
	ans = ans || side(c, b, a);
	
	if (ans) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

