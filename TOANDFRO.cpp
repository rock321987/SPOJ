/*
  Ad-hoc..this is not an efficient solution..there are many other efficient methods
*/

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	while (1) {
		int n, i, x, j;
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
		
		char str[100005], tmp[1];
		scanf("%s", str);
		
		x = strlen(str) / n;
		char arr[1005][1005];
		//printf("%d	", x);
		if (strlen(str) % n > 0) {
			for (i = strlen(str); i < (x + 1)* n;i++) {
				str[i] = 'x';
			}
			x++;
		}
		
		for (i = 0;i < x;i++) {
			for (j = 0;j < n;j++) {
				arr[i][j] = str[i * n + j];
			}
		}
		
		for (i = 0;i < x;i++) {
			if (i % 2 == 1) {
				for (j = 0;j < n / 2;j++) {
					tmp[0] = arr[i][j];
					arr[i][j] = arr[i][n - j - 1];
					arr[i][n - j - 1] = tmp[0];
				}
			}
		}
		
		for (i = 0;i < n;i++) {
			for (j = 0;j < x;j++) {
				printf("%c", arr[j][i]);
			}
		}
		printf("\n");
		
	}
	return 0;
}
