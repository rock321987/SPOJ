#include <cstdio>
#include <cmath>
 
#define lim 100005
 
using namespace std;
 
long int arr1[lim] = {0}, arr2[lim] = {0};
 
int main()
{
	long int n, i, x, y, flag = 0;
	scanf("%ld", &n);
	
	long int ceiling = ceil(n / 2.0);
	
	//printf("ceil = %ld\n", ceiling);
	
	for (i = 0;i < n;i++) {
		scanf("%ld%ld", &x, &y);
		arr1[x]++;
		arr2[y]++;
	}
	
	/*for (i = 0;i < 10;i++) {
		printf("%ld	%ld\n", arr1[i], arr2[i]);
	}*/
	long int mini;
	
	for (i = 0;i < lim;i++) {
		mini = fabs(ceiling - arr1[i]);
		if (arr1[i] >= ceiling) {
			printf("0\n");
			flag = 1;
			break;
		}
		if (arr1[i] + arr2[i] >= ceiling) {
			printf("%ld\n", mini);
			flag = 1;
			break;
		}
	}
	
	if (flag == 0) {
		printf("Impossible\n");
	}
	return 0;
} 
