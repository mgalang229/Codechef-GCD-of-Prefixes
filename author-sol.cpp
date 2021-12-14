#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// view the image in this repository for better understanding
		// for each 1 <= i < N, B[i] must be divisible by B[i + 1]
		bool checker = true;
		for (int i = 0; i + 1 < n; i++) {
			checker &= (b[i] % b[i + 1] == 0);
		}
		if (checker) {
			for (int i = 0; i < n; i++) {
				cout << b[i] << " ";
			}
		} else {
			cout << -1;
		}
		cout << '\n';
	}
	return 0;
}
