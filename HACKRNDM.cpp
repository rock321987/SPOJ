#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

long int arr[1000000];

int main()
{
	long int n, k, x;
	long int i, cnt = 0;
	scanf("%ld%ld", &n, &k);
	
	for (i = 0;i < n;i++) {
		scanf("%ld", &arr[i]);
	}
	sort(arr, arr + n);
	
	for (i = 0;i < n;i++) {
		x = fabs(k + arr[i]);
		//printf("%ld\n", x);
		if (binary_search(arr, arr + n, x)) {
			cnt++;
		}
	}
	printf("%ld\n", cnt);
	
	return 0;
}
