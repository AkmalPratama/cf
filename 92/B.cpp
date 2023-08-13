#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	int n, k;
	cin >> n >> k;
	int a[n][k];
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < k; j++) {
			a[i][j] = s[j] - '0';
		}
	}
	int p[k];
	for (int i = 0; i < k; i++) {
		p[i] = i;
	}
	int ans = INT_MAX;
	do {
		int mi = INT_MAX;
		int ma = INT_MIN;
		for (int i = 0; i < n; i++) {
			int x = 0;
			for (int j = 0; j < k; j++) {
				x *= 10;
				x += a[i][p[j]];
			}
			ma = max(ma, x);
			mi = min(mi, x);
		}
		ans = min(ma - mi, ans);
	} while(next_permutation(p, p + k));
	cout << ans << endl;
	return 0;
}

