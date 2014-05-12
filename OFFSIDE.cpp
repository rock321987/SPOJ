#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	while (1) {
		int a, d, i;
		scanf("%d%d", &a, &d);
		
		if (a == 0 || d == 0) {
			break;
		}
		int attacker[105], defender[105], flag = 0;
		
		for (i = 0;i < a;i++) {
			scanf("%d", &attacker[i]);
		}
		
		for (i = 0;i < d;i++) {
			scanf("%d", &defender[i]);
		}
		
		sort(defender, defender + d);
		
		for (i = 0;i < a;i++) {
			if (attacker[i] < defender[1]) {
				flag = 1;
				break;
			}
		}
		
		if (flag == 1) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
	return 0;
}
