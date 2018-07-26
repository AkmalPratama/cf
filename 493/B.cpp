#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, b;
	
	cin >> n >> b;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int odd, even;
	vector<int> v;
	odd = even = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even++;
		} else {
			odd++;
		}
		if (odd == even) {
			v.push_back(i);
		}
	}
//	bool split_middle = false;
//	if (v[last_equal+1] % 2 == 0) {
//		bool buf = ((v[last_equal+1] % 2) == 0);
//		for (int i = (last_equal+1); i <= ((last_equal + n) / 2); i++) {
//			buf = buf && (v[i] % 2 == 0);
//		}
//		if (buf) {
//			split_middle = true;
//		}
//	} else {
//		bool buf = ((v[last_equal+1] % 2) != 0);
//		for (int i = (last_equal+1); i <= ((last_equal + n) / 2); i++) {
//			buf = buf && (v[i] % 2 != 0);
//		}
//		if (buf) {
//			split_middle = true;
//		}
//	}
//	if (split_middle) {
//		v.push_back((last_equal + n) / 2);
//	}
	v.pop_back();

	vector<int> cost;
	for (int i = 0; i < v.size(); i++) {
		int cost_cut;
		cost_cut = abs(a[v[i]] - a[v[i]+1]);
		cost.push_back(cost_cut);
	}//cout << "COST SIZE " << cost.size() << endl;
	sort(cost.begin(), cost.end());
	int sum = 0;
	int max_cut = 0;;
	for (int i = 0; i < cost.size(); i++) {
		if ((sum + cost[i]) <= b) {
			sum += cost[i];
			max_cut = i+1;
		}
	}
	cout << max_cut << endl;
	return 0;
}

