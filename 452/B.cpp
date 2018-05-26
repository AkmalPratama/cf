#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	string patt = "312831303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312831303130313130313031";
	string buf, s = "";
	for (int i = 0; i < n; i++) {
		cin >> buf;
		s += buf;
	}
	size_t found = patt.find(s);
	if (found != string::npos) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
