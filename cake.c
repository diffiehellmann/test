#include <stdio.h>

int main () {
	float pi = 4;
	int en = 1;
	for (int k = 1; k < 10000000; k++) {
		pi = pi + (-en) * (4.0/(2*k+1));
		en = en * -1;
	}
	printf("%.11f\n", pi);
	return 0;
}
