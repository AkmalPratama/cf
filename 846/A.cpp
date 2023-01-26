#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	vector<int> vo;
	vector<int> ve;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (x % 2 == 1) {
			vo.push_back(i);
		} else {
			ve.push_back(i);
		}
	}
	if (vo.size() == 0 || (vo.size() < 3 && ve.size() < 2)) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	if (vo.size() >= 3) {
		cout << vo[0] << " " << vo[1] << " " << vo[2] << endl;
	} else {
		cout << vo[0] << " " << ve[0] << " " << ve[1] << endl;
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

