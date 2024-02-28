#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b, l;
	cin >> a >> b >> l;
	set<int> s;
	for (int i = 1; l % i == 0; i *= a) {
		for (int j = 1; l % (i*j) == 0; j *= b) {
			if ((l % (i * j)) == 0) {
				s.insert(l / (i * j));
			}
		}
	}
	cout << s.size() << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

