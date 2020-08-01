// Digit root
// By LaoZhang
// Date 2020-07-31

#include <cstdio>
#include <cstring>

const int N = 1000 + 0xAC;
unsigned char d[N];

int main()
{
	int n, r = 0;

	scanf("%s", d);
	n = strlen((const char *)d);
	for (int i = 0; i < n; i++) {
		r += d[i] - '0';
		if (r > 9)
			r -= 9;
	}
	if (r > 9)
		r -= 9;
	printf("%d", r);
	return 0;
}
