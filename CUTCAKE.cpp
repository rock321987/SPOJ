/*
	QUADRATIC EQUATION MATHEMATICS
*/

#include <cstdio>
#include <cmath>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long long int n;
		scanf("%lld", &n);
		
		printf("%0.0lf\n", (-1 + sqrt(1 + 8 * (n - 1))) / 2);
	}
	return 0;
}
