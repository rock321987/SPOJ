/*
  Ad-hoc
  String manipulation
*/

#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int key;
		scanf("%d", &key);
		char arr[100005];
		scanf("%s", arr);
		long int i, x;
		
		if (key >=0 && key <= 25) {
			for (i = 0;arr[i] != '\0';i++) {
				if (arr[i] == '.') {
					arr[i] = ' ';
				} else {
					x = arr[i];
					if (x >= 65 && x <= 90) {
						x += key;
						if (x > 90) {
							x = x - 26;
						}
					} else if (x >= 97 && x <= 122) {
						x += key;
						if (x > 122) {
							x = x - 26;
						}
					}
					arr[i] = x;
				}
			}
		} else if (key > 25 && key < 52) {
			key = key % 26;
			for (i = 0;arr[i] != '\0';i++) {
				if (arr[i] == '.') {
					arr[i] = ' ';
				} else {
					x = arr[i];
					if (x >= 65 && x <= 90) {
						x += key;
						if (x > 90) {
							x -= 26;
						}
						x += 32;
					} else if (x >= 97 && x <= 122) {
						x += key;
						if (x > 122) {
							x -= 26;
						}
						x -= 32;
					}
					arr[i] = x;
				}
			}
		}
		
		printf("%s\n", arr);
	}
	return 0;
}
