#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


int gcdp(signed long long a, signed long long b, signed long long c, signed long long d, signed long long ac, signed long long bc) {
  	signed long long ta = ac, tb = bc, q, r;
	q = c / d;
	r = c % d;
  	if (r == 0) {
		if (a < 0) {
			a = 0-a;
			b = 0-b;
			d = 0-d;
		}
		printf("%lld %lld %lld", a, b, d);
		return 0;
	}
	return gcdp(ta-q*a, tb-q*b, d, r, a, b);
}


int main() {
  signed long long c = 0, d = 0, a = 0, b = 1, ac = 1, bc =0;

  signed long long res;
  
  res = scanf("%lld %lld", &c, &d);
  assert(res == 2);

  gcdp(a, b, c, d, ac, bc);
  return 0;
}
