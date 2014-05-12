#include <cstdio>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, i, flag = 0, x;
		scanf("%d", &n);
		
		for (i = 0;i < n;i++) {
			scanf("%d", &x);
			
			if (x > i) {
				flag = 1;
			}
		}
		
		if (flag == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}
