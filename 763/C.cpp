#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &v, int x) {
	vector<int> mod_v(v);
	for (int i = v.size() - 1; i >= 2; i--) {
		if (mod_v[i] < x) {
			return false;
		}
		int d = min(v[i], mod_v[i] - x) / 3;
		mod_v[i-1] += d;
		mod_v[i-2] += 2 * d;
	}
	return mod_v[0] >= x && mod_v[1] >= x;
}

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int &x: v) {
		cin >> x;
	}
	int lb = *min_element(v.begin(), v.end());;
	int ub = *max_element(v.begin(), v.end());
	while (lb < ub) {
		int mid = (ub + lb + 1) / 2;
		if ((check(v, mid))) {
			lb = mid;
		} else {
			ub = mid - 1;
		}
	}
	cout << lb << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
