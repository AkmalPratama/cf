#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	set<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (st.count(x)) {
			st.insert(-x);
		} else {
			st.insert(x);
		}
	}
	cout << st.size() << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
