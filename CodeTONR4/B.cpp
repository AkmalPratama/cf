#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "-1\n";
		return;
	}
	int x = 1;
	vector<int> v;
	string bin = bitset<32>(n).to_string();
	for (int i = 30; i >= 0; i--) {
		if (bin[i] == '1') {
			v.push_back(2);
		} else {
			v.push_back(1);
		}
	}
	cout << v.size() << endl;
	for (int i = v.size()-1; i >= 0; i--) {
		cout << v[i] << ' ';
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

