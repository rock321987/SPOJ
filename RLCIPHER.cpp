#include <cstdio>

using namespace std;

int main()
{
	long int arr[100005];
	
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long int n, i;
		scanf("%ld", &n);
		
		for (i = 0;i < n;i++) {
			scanf("%ld", &arr[i]);
			
			if (arr[i] < 0) {
				continue;
			}
			
			if (arr[i] == 1 || arr[i] == 5) {
				arr[i] = -3;
			} else if (arr[i] == 2) {
				arr[i] = -2;
			} else {
				arr[i] = -4;
			}
		}
		for (i = 0;i < n;i++) {
			printf("%ld ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
