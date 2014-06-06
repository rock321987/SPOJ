/*
  Ad-hoc
  String
*/

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	label:while (t--) {
		char arr[10005], key[10005];
		int i, ascii, j = 0;
		scanf("%s%s", key, arr);
		
		for (i = 0;i < strlen(arr);) {
			while (j < strlen(key)) {
				ascii = arr[i] - (key[j] - '0');
			
				if (ascii < 97) {
					ascii += 26;
				}
				printf("%c", ascii);
				j++;
				i++;
				
				if (i == strlen(arr)) {
					printf("\n");
					goto label;
				}
			}
			while (j - 1 >= 0) {
				ascii = arr[i] - (key[j - 1] - '0');
			
				if (ascii < 97) {
					ascii += 26;
				}
				printf("%c", ascii);
				j--;
				i++;
				
				if (i == strlen(arr)) {
					printf("\n");
					goto label;
				}
			}
			//break;
		}
		printf("\n");
	}
	
	return 0;
}
