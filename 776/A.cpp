#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		char c;
		cin >> s;
		cin >> c;
		vector<int> v;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == c) {
				v.push_back(i);
			}
		}
		
		if (v.empty()) {
			cout << "NO\n";
		} else {
			if (s.length() == 1) {
				cout << "YES\n";
			} else {
				bool b = false;
				for (int i = 0; i < v.size(); i++) {
					if (v[i] % 2 == 0) {
						b = true;
					}
				}
				if (b)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
		}
	}
	return 0;
}

