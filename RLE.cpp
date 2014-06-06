/*
  Ad-hoc
*/

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char arr[100005];
	
	while (scanf("%s", arr) != EOF) {
		long int i = 0, cnt, j, k;
		
		while (i < strlen(arr)) {
			j = i;
			cnt = 1;
			
			while (arr[j] == arr[j + 1]) {
				j++;
				cnt++;
				i++;
			}
			//printf("%ld	%ld\n", cnt, j);
			if (cnt == 1 || cnt == 2 || cnt == 3) {
				for (k = j;k > j - cnt;k--) {
					printf("%c", arr[k]);
				}
			} else {
				printf("%ld!%c", cnt, arr[j]);
			}
			//printf("\n");
	
			if (arr[j] != arr[j + 1]) {
				i++;
				continue;
			}
		}
		printf("\n");
	}
	return 0;
}
