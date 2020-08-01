// Induction door
// By LaoZhang
// Date 2020-07-31

#include <cstdio>

#define ll long long

int main()
{
	int n, x;
	int c, t;
	ll ans = 0;

	scanf("%d %d", &n, &x);
	ans = x;
	scanf("%d", &c);
	for (int i = 1; i < n; i++) {
		scanf("%d", &t);
		if (t -  c > x)
			ans += x;
		else
			ans += t - c;
		c = t; // next close time
	}
	printf("%lld\n", ans);
	return 0;
}
