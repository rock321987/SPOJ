/*
  Prime number
  Factorization
*/

#include <cstdio>
#include <algorithm>

typedef long long int lli;

using namespace std;

int primes(long long int num)
{
	if (num == 1) {
		return 1;
	}
	
	long long int i;
	
	for(i = 2;i * i <= num;i++) {
		if(num % i == 0) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	lli i, n;
	int t;
	long int j;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%lld", &n);
		lli arr[100005];
		
		if (n % 2) {
			printf("0\n");
		} else {
			n /= 2;
			j = 0;
			
			for (i = 1;i * i <= n;i++) {
				if (n % i == 0 && i != n / i) {
					if (primes(i)) {
						arr[j] = i;
						j++;
					}
					if (primes(n / i)) {
						arr[j] = n / i;
						j++;
					}
				} else if (n % i == 0 && i == n / i) {
					if (primes(i)) {
						arr[j] = i;
						j++;
					}
				}
			}
			sort(arr, arr + j);
			
			printf("%ld ", j);
			
			for (i = 0;i < j - 1;i++) {
				printf("%lld ", arr[i]);
			}
			printf("%lld", arr[j - 1]);
			printf("\n");
		}
	}
	return 0;
}
