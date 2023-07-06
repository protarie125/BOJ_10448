#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

vi tri;

bool check() {
	int n;
	cin >> n;

	for (auto i = 0; i < tri.size(); ++i)
		for (auto j = 0; j < tri.size(); ++j)
			for (auto k = 0; k < tri.size(); ++k) {
				if (n == tri[i] + tri[j] + tri[k]) {
					return true;
				}
			}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	tri.reserve(100);
	for (auto i = 1; i < 100; ++i) {
		const auto v = (i * (i + 1)) / 2;
		if (v <= 1000) {
			tri.push_back(v);
		}
	}

	int t;
	cin >> t;
	while (0 < (t--)) {
		cout << (check() ? 1 : 0) << '\n';
	}

	return 0;
}