#include <bits/stdc++.h>
using namespace std;

char nth_letter(int n) {
    return "abcdefghijklmnopqrstuvwxyz"[n-1];
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<string> v;
	for (int i = s.length()-1; i >= 0; i--) {
		if (s[i] == '0') {
			v.push_back(s.substr(i-2, 2));
			i -= 2;
		} else {
			v.push_back(s.substr(i, 1));
		}
	}
	for (int i = v.size()-1; i >= 0; i--) {
		cout << nth_letter(stoi(v[i]));
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

