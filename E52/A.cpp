#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long s, a, b, c, ans;
		cin >> s >> a >> b >> c;
		ans = s/c;
		ans += (ans/a) * b;
		cout << ans << endl;
	}
	return 0;
}
