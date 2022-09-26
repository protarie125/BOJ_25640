#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s0 = string{};
	cin >> s0;

	auto n = int{};
	cin >> n;

	auto ans = int{ 0 };
	while (0 < (n--)) {
		auto s = string{};
		cin >> s;

		if (s0 == s) {
			++ans;
		}
	}

	cout << ans;

	return 0;
}