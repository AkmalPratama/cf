#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	set<int> st;
	for (int &x: a) {
		cin >> x;
		if (st.count(x) == 0) {
			st.insert(x);
		}
	}
	if ((n - st.size()) % 2 == 0) {
		cout << st.size() << endl;
	} else {
		cout << st.size() - 1 << endl;
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

