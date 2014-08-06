/*
  Observation.
*/

#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, x;
		scanf("%d", &n);
		int freq[1005] = {0}, flag = 0;
		
		for (int i = 0;i < n;i++) {
			scanf("%d", &x);
			
			if (x >= n) {
				flag = 1;
			}
			
			if (x < n / 2) {
				x = n - 1 - x;
			}
			
			freq[x]++;
		}
		int i;
		int tmp = n;
		n /= 2;
		if (n % 2) {
			 n++;
		}
		for (i = tmp;i >= n;i--) {
			if (freq[x] == 2) {
				
			} else {
				flag = 1;
				break;
			}
		}
		
		if (flag == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

 	return 0;
}
