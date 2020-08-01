// By LaoZhang
// Date 2020-08-01

#include <cstdio>

#define MAX(x, y) ((x) > (y) ? (x) : (y))
const int N = 100000 + 0xAC;

unsigned int a[N];
unsigned int b[N];

int main()
{
	unsigned long long n, t, ans = 0, i, j, l, suma = 0, sumb = 0;

	scanf("%lld%lld", &n, &t);

	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	for (i = 1; i <= n; i++)
		scanf("%d", &b[i]);

	for (i = 1; i <= n && suma <= t; i++) {
		suma += a[i];
		ans++;
	}

	if (t < suma) {
		i--;
		suma -= a[i];
		ans--;
		i--;
	}

	l = t - suma;

	for (j = 1; j <= n && sumb <= l; j++) {
		sumb += b[j];
		ans++;
	}

	if (l < sumb) {
		j--;
		sumb -= b[j];
		ans--;
		j--;
	}

	suma -= a[i];
	i--;
	for (j = j + 1; j <= n && sumb <= t; j++) {
		sumb += b[j];
		if (suma + sumb < t)
			ans = MAX(ans, (i + j));
		while (i > 0 && (suma + sumb > t)) {
			suma -= a[i];
			i--;
		}
	}

	printf("%lld\n", ans);
}
