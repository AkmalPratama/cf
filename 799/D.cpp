#include <bits/stdc++.h>
using namespace std;

int clock2min(string s) {
	return (stoi(s.substr(0, 2)) * 60) + stoi(s.substr(3, 2));
}

void solve() {
	string s;
	int n, ans = 0;
	set<int> st({0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412});
	cin >> s >> n;
	int x = clock2min(s);
	for (int i = 0; i < 1440; i++) {
		x += n;
		x %= 1440;
		if (st.count(x)) {
			ans++;
			st.erase(x);
		}
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

