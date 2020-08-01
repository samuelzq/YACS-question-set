// By LaoZhang
// Date 2020-08-01

// If summary of array [0, r] and array [0, l] have
// the same mod of k, array [r, l] mod k equals 0.
// We stats arrays have the same mod of k firstly.
// Then calculate pairs in the same mod.

#include <cstdio>

const int N = 100000 + 0xAC;
int m[N] = {1};

int main()
{
	int n, k, a, mode = 0, ans = 0;
	scanf("%d%d", &n, &k);

	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a);
		mode = (mode + a) % k;

		// stats arrays with same mod
		m[mode]++;
	}

	// calculate pair count
	for (int i = 0; i <= k; ++i)
		ans += (m[i] * (m[i] - 1)) / 2;

	printf("%d\n", ans);
	return 0;
}
