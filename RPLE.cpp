/*
  Ad-hoc..frequency based
*/

#include <cstdio>

using namespace std;

int main()
{
	int t, j;
	scanf("%d", &t);
	
	for (j = 1;j <= t;j++) {
		int n, r, i, r1, r2, flag = 0;
		scanf("%d%d", &n, &r);
		int freq1[10005] = {0}, freq2[10005] = {0};
		
		for (i = 0;i < r;i++) {
			scanf("%d", &r1);
			freq1[r1]++;
			scanf("%d", &r2);
			freq2[r2]++;
		}
		for (i = 0;i < n;i++) {
			if (freq1[i] && freq2[i]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			printf("Scenario #%d: spied\n", j);
		} else {
			printf("Scenario #%d: spying\n", j);
		}
	}
	return 0;
}
