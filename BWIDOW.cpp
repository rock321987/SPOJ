/*
  Ad-hoc..simple logic..
  key line --> "A ring R1 will pass through ring R2 only if the outer radius of R1 is less than the inner radius of R2"
*/

#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, i;
		scanf("%d", &n);
		long int small_radius[n], big_radius[n], max_small_radius = 0, pos = 0;
		
		for (i = 0; i < n;i++) {
			scanf("%ld%ld", &small_radius[i], &big_radius[i]);
			
			if (small_radius[i] > max_small_radius) {
				max_small_radius = small_radius[i];
				pos = i;
			}
		}
		int flag = 0;
		for (i = 0;i < n;i++) {
			if (pos == i) {
				continue;
			}
			if (max_small_radius > big_radius[i]) {
				
			} else {
				flag = 1;
				break;
			}
		}
		
		if (flag) {
			printf("-1\n");
		} else {
			printf("%ld\n", pos + 1);
		}
	}
	return 0;
}
