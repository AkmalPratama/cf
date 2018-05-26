#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	string s;
	map<string, int> m;
	
	cin >> n;
	cin >> s;
	for (int i = 0; i < (n-1); i++) {
		string s1 = s[i];
		string s2 = s[i+1];
		string idx = s1 + s2;
		m[idx]++;
	}
	return 0;
}
