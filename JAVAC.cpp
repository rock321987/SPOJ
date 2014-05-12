#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char arr[150];
	
	while (scanf("%s", arr) != EOF) {
		int i, flag = 0, cnt1 = 0, cnt2 = 0, java = 0, cplus = 0;
		
		if (arr[0] == '_' || arr[strlen(arr) - 1] == '_' || (arr[0] >= 'A' && arr[0] <= 'Z') || (arr[0] >= 48 && arr[0] <= 57)) {
			flag = 1;
		} else {
			for (i = 0;i < strlen(arr);i++) {
				if (arr[i] == '_') {
					//printf("hello\n");
					cnt1++;
					if ((arr[i + 1] >= 97 && arr[i + 1] <= 122) || (arr[i + 1] >= 48 && arr[i + 1] <= 57)) {
						i++;
					} else {
						flag = 1;
						//break;
					}
					java = 1;
				}
				if (arr[i] >= 65 && arr[i] <= 90) {
					cnt2++;
					if (arr[i - 1] == '_' || arr[i + 1] == '_') {
						flag = 1;
						//break;
					} else {
						i++;
					}
					cplus = 1;
				}
				//printf("cnt1 = %d	%d\n", cnt1, cnt2);
				if (cnt1 && cnt2) {
					flag = 1;
					break;
				}
			}
		}
		
		if (flag == 1) {
			printf("Error!\n");
		} else {
			if (java) {
				for (i = 0;i < strlen(arr);i++) {
					if (arr[i] == '_')  {
						if (arr[i + 1] >= 48 && arr[i + 1] <= 57) {
							printf("%c", arr[i + 1]);
							i++;
						} else if (arr[i + 1] >= 97 && arr[i + 1] <= 122) {
							printf("%c", arr[i + 1] - 32);
							i++;
						}
					} else {
						printf("%c", arr[i]);
					}
				}
			} else if (cplus) {
				for (i = 0;i < strlen(arr);i++) {
					if (arr[i] >= 65 && arr[i] <= 90) {
						printf("_%c", arr[i] + 32);
					} else {
						printf("%c", arr[i]);
					}
				}
			} else {
				printf("%s", arr);
			}
			printf("\n");
		}
	}
	return 0;
}
