#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	int t;
	cin >> t;
	ll h = 0;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	for (int i = 0; i < t; i++) {
		ll x;
		cin >> x;
		h += x;
		pq.push(x);
		while (h < 0) {
			h -= pq.top();
			pq.pop();
		}
	}
	cout << (int) pq.size() << endl;
}

