#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	string s;
	vector<string> v;
	vector<string>::iterator it;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (v.empty()) {
			v.push_back(s);
		} else {
			int temp = v.size();
			for (int j = 0; j < temp; j++) {
				if (v.size() == 1) {
					if (v[j].find(s) != string::npos) {
						v.insert(v.begin(), s);
					} else {
						if (s.find(v[j]) != string::npos) {
							v.insert(v.end(), s);
						}
					}
				} else {
					if (j == 0) {
						if (v[j].find(s) != string::npos) {
							v.insert(v.begin(), s);
							break;
						}
					} else {
						if (j == (v.size() - 1)) {
							if (s.find(v[j]) != string::npos) {
								v.insert(v.end(), s);
								break;
							} else {
								if (v[j].find(s) != string::npos && s.find(v[j-1]) != string::npos) {
									it = v.begin();
									v.insert(it+j, s);
									break;
								}
							}
						} else {
							if (v[j].find(s) != string::npos && s.find(v[j-1]) != string::npos) {
								it = v.begin();
								v.insert(it+j, s);
								break;
							}
						}
					}
				}	
			}
//			cout << "---" << endl;
//			for (int i = 0; i < v.size(); i++) {
//				cout << v[i] << endl;
//			}
		}
	}
	if (v.size() != n) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << endl;
		}
	}
	return 0;
}
