/*
  Sieve
*/

#include <cstdio>
#include <cmath>

using namespace std;

#define max 35000

int arr[35000] = {0};
int prime[3500];

void sieve()
{
	int i, j, k = 2;
	
	arr[0] = arr[1] = 1;
	prime[0] = 0;
	prime[1] = 1;
	
	for (i = 2;i <= max;i++) {
		j = i;
		if (arr[i] == 0) {
			prime[k] = i;
			k++;
			for (j = j + i;j <= max;j += i) {
				arr[j] = 1;
			}
		}
	}
}

int main()
{
	sieve();
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long long int a, b, i, mid;
		int j, flag;
		scanf("%lld%lld", &a, &b);
		
		for (i = a;i <= b;i++) {
			j = 2, flag = 1, mid = sqrt(i);
			while (prime[j] <= mid) {
				if (i % prime[j] == 0) {
					flag = 0;
					break;
				}
				j++;
			}
			if (flag == 1 && i != 1) {
				printf("%lld\n", i);
			}
		}
	}
	return 0;
}
