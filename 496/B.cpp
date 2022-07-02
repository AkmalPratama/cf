#include <bits/stdc++.h>

using namespace std;

int main () {
	string s, t;
	
	cin >> s >> t;
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	int short_string = min(s.length(), t.length());
	int idx = 0;
	for (int i = 0; i < short_string; i++) {
		if (s[i] != t[i]) {
			idx = i - 1;
			break;
		}
	}
	if (idx == 0) {
		idx = short_string - 1;
	}
	cout << s.length() + t.length() - (2 * idx) - 2 << endl;
	return 0;
}

