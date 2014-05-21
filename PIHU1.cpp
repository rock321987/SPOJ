/*
  Ad-hoc..little bit modification in sliding window algorithm
*/


#include <cstdio>
#include <algorithm>

using namespace std;

int search(long long int arr[], long long int sum, int n)
{
	int i, j, k;
	for (k = 0;k < n;k++) {
		j = n - 1;
		for (i = k + 1;i < j;) {
			if (arr[i] + arr[j] + arr[k] == sum) {
				return 1;
			} else if (arr[i] + arr[j] + arr[k] < sum) {
				i++;
			} else {
				j--;
			}
		}
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, i, check;
		scanf("%d", &n);
		long long int arr[n], sum;
		
		for (i = 0;i < n;i++) {
			scanf("%lld", &arr[i]);
		}
		sort(arr, arr + n);
		scanf("%lld", &sum);
		check = search(arr, sum, n);
		
		if (check) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
