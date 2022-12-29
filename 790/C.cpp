#include <bits/stdc++.h>
#define ll long long
using namespace std;

int diff(string& s1, string& s2) {
	int sum = 0;
	for (int i = 0; i < s1.length(); i++) {
		sum += abs(s1[i] - s2[i]);
	}
	return sum;
}

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int min = diff(v[0], v[1]);
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (diff(v[i], v[j]) < min) {
				min = diff(v[i], v[j]);
			}
		}
	}
	cout << min << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

