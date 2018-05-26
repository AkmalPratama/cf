#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
	string s;
	int o, link;
	
	o = 0;
	link = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'o') {
			o++;
		} else {
			link++;
		}
	}
	if (o == 1 || o == 0 || link == 0) {
		cout << "YES" << endl;
	} else {
		if ((link % o) == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
