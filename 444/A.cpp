#include <bits/stdc++.h>
using namespace std;

int main () {
	string s;
	int cnt = 0;
	cin >> s;
	bool found = false;
	int j = 0;
	while ((j < s.length()) && !found) {
		if (s[j] == '1') {
			found = true;
			j--;
		}
		j++;
	}
	for (int i = j; i < s.length(); i++) {
		if (s[i] == '0') {
			cnt++;
		}
		if ((cnt == 6)) {
			cout << "yes" << endl;
			break;
		}
	}
	if (cnt < 6) {
		cout << "no" << endl;
	}
	return 0;
}
