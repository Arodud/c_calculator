#include <stdio.h>
#include <assert.h>


int cf (int x, int y) {
	if (x<y) {
    	printf("0 ");
    	return cf(y, x);
    	}
	printf("%d ", x/y);
	if (x%y == 0)	
    		return 0;
	return cf(y, x%y);
}

int main() {
	int x, y, res;
	res = scanf("%d %d", &x, &y);
	assert (res == 2);
	cf(x, y);
	return 0;
}
