#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	string s;
	cin >> s;
	ll cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			cnt++;
		}
	}
	
	string t = to_string(cnt);
	for (int i = 0; i < t.length(); i++) {
		if (t[i] != '4' && t[i] != '7') {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}

