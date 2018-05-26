#include <iostream>
#include <string>
using namespace std;

bool isRC(string s) {
	if (s[0] == 'R') {
		bool cPos = false;
		for (int i = 2; i < s.length(); i++) {
			if (s[i] == 'C') {
				cPos = true;
			}
		}
		return cPos;
	} else {
		return false;
	}
}

int main () {
	string s;
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (isRC(s)) {
			cout << "T";
		} else {
			cout << "F";
		}
	}
	return 0;
}
