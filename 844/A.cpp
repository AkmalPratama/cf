#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int w, d, h;
	int a, b, f, g;
	cin >> w >> d >> h;
	cin >> a >> b >> f >> g;
	int up, dw, ri, le;
	
	up = d - b;
	dw = b;
	ri = w - a;
	le = a;
	
	up += abs(f - a);
	dw += abs(f - a);
	ri += abs(g - b);
	le += abs(g - b);
	
	up += d - g;
	dw += g;
	ri += w - f;
	le += f;
	
	cout << min(up, min(dw, min(ri, le))) + h << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

