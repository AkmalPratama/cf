#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, p, temp = -1;
	string s;
	bool period = true;
	
	cin >> n >> p;
	cin >> s;
	for (int i = 0; i < (n - p); i++) {
		if (s[i] != s[i+p] && (s[i] == '.' || s[i+p] == '.')) {
			period = false;
			temp = i;
			break;
		}
		if (s[i] != s[i+p] && (s[i] != '.' && s[i+p] != '.')) {
			period = false;
			break;
		}
		if (s[i] == s[i+p] && (s[i] == '.' && s[i+p] == '.')) {
			period = false;
			temp = i;
			break;
		}
	}
	if (period) {
		cout << "No" << endl;
	} else {
		if (temp != -1) {
			if (s[temp] == '.') {
				if (s[temp+p] == '1') {
					s[temp] = '0';
				} else {
					s[temp] = '1';
				}
			}
			if (s[temp+p] == '.') {
				if (s[temp] == '1') {
					s[temp+p] = '0';
				} else {
					s[temp+p] = '1';
				}
			}
//			if (s[temp] == s[temp+p]) {
//				s[temp] = 0;
//				s[temp+p] = 1;cout << "3" << endl;
//			}
		}
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '.') {
				s[i] = '0';
			}
		}
		cout << s << endl;
	}
	return 0;
}
