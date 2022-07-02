#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, k;
	string s;
	
	cin >> n >> k;
	cin >> s;
	int cnt = 0;
	int bal = 0;
	for (int i = 0; i < s.length(); i++) {
		if (cnt < k/2 && s[i] == '(') {
			cout << s[i];
			cnt++;
			bal++;
		}
		if (bal > 0 && s[i] == ')') {
			cout << s[i];
			bal--;
		}
	}
	cout << endl;
	return 0;
}
