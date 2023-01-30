#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b) {
	return a.second < b.second;
}

int solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 2; i*i <= n && n != 1; i++) {
		if (n % i == 0) {
			int j = 0;
			while (n % i == 0) {
				n /= i;
				j++;
			}
			v.push_back(make_pair(i, j));
		}
	}
	if (n != 1) {
		v.push_back(make_pair(n, 1));
	}
	sort(v.begin(), v.end(), comp);
	
	int a[v.size()];
	a[v.size()-1] = v[v.size()-1].first;
	for (int i = v.size()-2; i >= 0; i--) {
		a[i] = a[i+1] * v[i].first;
	}
	
	int ans = a[0] * v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (v[i].second != v[i-1].second) {
			ans += (v[i].second - v[i-1].second) * a[i];
		}
	}
	return ans;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

