// By LaoZhang
// Date 2020-08-01

#include <cstdio>

int main()
{
	int a, x, y, n, m;

	scanf("%d %d %d", &a, &x, &y);
	n = x + y;
	m = a * n - x;
	printf("%d %d\n", n, m);
	return 0;
}
