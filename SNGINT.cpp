/*
  Ad-hoc
*/

#include <bits/stdc++.h>

using namespace std;

void calc(long int n)
{
	int arr[100];
	
	if (n < 10) {
		if (n == 0) {
			n += 10;
		}
		printf("%ld\n", n);
	} else {
	
		int k = 0;
		for (int i = 9;i > 1;i--) {
			
			while (n % i == 0) {
				n /= i;
				arr[k] = i;
				k++;
			}
		}
		
		if (n > 10) {
			printf("-1\n");
		} else {
			for (int i = k - 1;i >= 0;i--) {
				printf("%d", arr[i]);
			}
			printf("\n");
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long int n;
		scanf("%ld", &n);
		calc(n);
	}
 	return 0;
}
