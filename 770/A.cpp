#include <bits/stdc++.h>
using namespace std;

bool isPal(string s) {
	int i = 0;
	bool stop = false;
	while ((i < (s.size() / 2)) && !stop) {
		if (s[i] != s[s.size()-1-i]) {
			stop = true;
		}
		i++;
	}
	return !stop;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		string s;
		cin >> n >> k;
		cin >> s;
		if (isPal(s)) {
			cout << "1" << endl;
		} else {
			if (k > 0) {
				cout << "2" << endl;
			} else {
				cout << "1" << endl;
			}
		}
		
	}
	return 0;
}
