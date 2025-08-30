#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


unsigned long long gcd(unsigned long long x, unsigned long long y) {
	if (x<y) 
		return gcd(y, x);	
	assert (y>0);
	x = x % y;
	if (x == 0)
		return y;
	return gcd(y, x);
}

int main() {
	unsigned long long x = 0, y = 0, g;
	int res;

	res = scanf("%llu %llu", &x, &y);
	assert(res == 2);
	g = gcd(x, y);
	printf("%llu\n", g);
}
