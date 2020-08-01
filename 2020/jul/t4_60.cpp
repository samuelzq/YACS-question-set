// By LaoZhang
// Date: 2020-08-01
// Time complexity O(n^2), cannot AC

#include <cstdio>

const int N = 200000 + 0xAC;
unsigned int a[N];

int main()
{
	int n, k, t, ans = 0;

	scanf("%d %d", &n, &k);

	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &t);

		t = t % k;
		if (t == 0)
			ans++;

		a[i] = t;

		// check prefix array[1, i]
		for (int j = i - 1; j > 0; j--) {
			t = t + a[j];
			t = t % k;
			if (t == 0)
				ans++;
		}
	}

	printf("%d\n", ans);
	return 0;
}
