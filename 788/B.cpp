#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n;
		cin >> s;
		int k;
		cin >> k;
		map<char,int> m;
		for (int i = 0; i < k; i++) {
			char c;
			cin >> c;
			m.insert(make_pair(c,0));
		}
		vector<int> v;
		for (int i = 0; i < s.length(); i++) {
			if (m.find(s[i]) != m.end()) {
				v.push_back(i);
			}
		}
		if (!v.empty()) {
			int maxE = v[0];
			for (int i = 1; i < v.size(); i++) {
				if (v[i] - v[i-1] > maxE) {
					maxE = v[i] - v[i-1];
				}
			}
			cout << maxE << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}
//00010000001011
