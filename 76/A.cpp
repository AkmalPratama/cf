#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	string s;
	cin >> s;
	vector<string> v;
	string buf = "";
	for (int i = 1; i <= 80; i++) {
		buf += s[i-1];
		if ((i % 10) == 0) {
			v.push_back(buf);
			buf = "";
		}
	}
	map<string, int> m;
	for (int i = 0; i < 10; i++) {
		cin >> buf;
		m[buf] = i;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << m[v[i]];
	}
	cout << endl;
	return 0;
}

