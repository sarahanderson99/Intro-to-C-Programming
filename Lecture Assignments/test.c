#include <stdio.h>
int main(void) {
	int sum = 0;
	int m = 11, n = 6, temp = 2;

	if(m<n) {
		temp = n;
		n = m;
		m = temp;
	}
	printf("m is %d, n is %d\n", m, n);

	printf("n mod 3 is %d\n", n % 3);
	while (n != 0) {
		temp = temp + (3 - (n % 3));
		n -= 3;
	}
	printf("temp is %d\n", temp);

	if (temp > m){
		temp = temp + 3;
		sum = sum + temp;
	}
	printf("sum is %d\n", sum);

	return 0;
}
