#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	long long hc, dc, hm, dm, k, w, a;
    	cin >> hc >> dc;
    	cin >> hm >> dm;
    	cin >> k >> w >> a;
    	bool b = false;
    	for (int i = 0; i <= k; i++) {
    		long long wx = k - i;
    		long long ax = i;
    		long long lose = (hm -1 + (wx * w + dc)) / (wx * w + dc);
    		long long win = (ax * a + hc -1 + dm) / dm;
			if (lose <= win) {
    			b = true;
    			break;
			}
		}
		if (b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
    return 0;
}


