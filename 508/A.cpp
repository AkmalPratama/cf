#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, k;
	string s;
	cin >> n >> k >> s;
	int alp[27];
	for (int i = 0; i < 27; i++) {
		alp[i] = 0;
	}
	for (int i = 0; i < s.length(); i++) {
		alp[s[i]-64]++;
	}
	int min = alp[1];
	for (int i = 1; i <= k; i++) {
		if (min > alp[i]) {
			min = alp[i];
		}
	}
	if (min == 0) {
		cout << 0 << endl;
	} else {
		cout << min * k << endl;
	}
	return 0;
}
