#include <stdio.h>

typedef unsigned long long int ull;

int dig_sum(ull n)
{
	ull sum = 0, rem;
	
	while (n > 0) {
		rem = n % 10;
		sum += rem;
		n /= 10;
	}
	return sum;
}

int main()
{
	int t;
	scanf("%d", &t);
	ull i;
	
	while (t--) {
		ull n;
		scanf("%llu", &n);
		
		for (i = n;;i++) {
			if (i % dig_sum(i) == 0) {
				break;
			}
		}
		printf("%llu\n", i);
	}
	return 0;
}
