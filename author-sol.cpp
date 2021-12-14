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
		if (!is_sorted(b.rbegin(), b.rend())) {
			cout << -1 << '\n';
			continue;
		}
		bool checker = true;
		int x = b[0];
		for (int i = 1; i < n; i++) {
			int temp = __gcd(x, b[i]);
			if (temp != b[i]) {
				checker = false;
				break;
			}
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
