#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	bool b = true;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != 'n' 
		&& s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' 
		&& s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u' && i < s.length()-1) {
			b = false;
		}
		if (s[s.length()-1] != 'n' 
		&& s[s.length()-1] != 'a' && s[s.length()-1] != 'e' && s[s.length()-1] != 'i' && s[s.length()-1] != 'o' && s[s.length()-1] != 'u') {
			b = false;
		}
	}
	if (b) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
