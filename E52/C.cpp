#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	}
	sort(a, a+n);
	int maxTow = a[n-1];
	int minTow = a[0];
	
    return 0;
}
