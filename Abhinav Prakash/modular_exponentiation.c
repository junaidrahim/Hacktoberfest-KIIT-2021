#include<stdio.h>

int power(int x, unsigned int y, int p)
{
	int res = 1;

	x = x % p;

	if (x == 0) return 0;

	while (y > 0)
	{

		if (y & 1)
			res = (res * x) % p;

		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

int main() {
	int x, n, m;
	scanf("%d%d%d", &x, &n, & m);
	printf("Power is %u", power(x, n, m));
	return 0;
}