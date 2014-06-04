/*
  Brute force
*/

#include <cstdio>

using namespace std;

typedef long long int lli;

long long int gcd(long long int a, long long int b)
{
	long long int r;
	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		lli n, tmp, i;
		scanf("%lld", &n);
		
		if (n == 1) {
			printf("0\n");
		} else {
			tmp = n / 2;
		
			for (i = tmp;i > 0;i--) {
				if (gcd(n, i) == 1) {
					printf("%lld\n", i);
					break;
				}
			}
		}
	}
	return 0;
}
