#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		vector<int> v;
		string s;
		cin >> s;
		if (s.length() == 1) {
			cout << "NO" << endl;
		} else {
			bool b = true;
			char c = s[0];
			v.push_back(0);
			for (int i = 1; i < s.length(); i++) {
				if (c != s[i]) {
					c = s[i];
					v.push_back(i);
				}
			}
			v.push_back(s.length());
			for (int i = 0; i < v.size()-1; i++) {
				if (v[i+1] - v[i] < 2) {
					b = false;
				}
			}
			if (b) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}

