#include <bits/stdc++.h>
using namespace std;

int main() {
    long long node, vert;
    cin >> node >> vert;
    long long minIso, maxIso;
    if (node <= (vert*2)) {
    	minIso = 0;
	} else {
		minIso = node - (vert*2);
	}
	long long arr[(long long)((1e5) + 1)];
	for (long long i = 0; i <= 1e5; i++) {
		arr[i] = ((i*i)-i)/2;
	}
	long long maxCompleteNode;
	for (long long i = 0; i <= 1e5; i++) {
		if (vert <= arr[i]) {
			maxCompleteNode = i;
			break;
		}
	}
	if (vert == 0) {
		maxCompleteNode = 0;
	} else {
		if (vert == 1) {
			maxCompleteNode = 2;
		}
	}
	maxIso = node - maxCompleteNode;
	cout << minIso << " " << maxIso << endl;
    return 0;
}
