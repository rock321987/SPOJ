/*
  Ad-hoc..
  Conversion Example --> http://mathematics.knoji.com/how-to-convert-a-decimal-number-into-negative-base-a-tutorial/
*/

#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	//while (1) {
	
	long long int n, tmp, rem;
	int arr[1005];
	int i;
	
	i = 0;
	scanf("%lld", &n);
	if (n == 0) {
		printf("0\n");
		return 0;
	}
	
	while (n != 0) {
		tmp = n;
		
		if (n < 0) {
			if ((-1 * n) % 2 == 0) {
				n = -1 * n / 2;
				arr[i] = 0;
				i++;
			} else {
				n = -1 * (n / 2) + 1;
				rem = tmp + 2 * n;
				arr[i] = rem;
				i++;
			}
			//printf("%lld", rem);
		} else if (n > 0) {
			n = -1 * n / 2;
			rem = tmp + 2 * n;
			arr[i] = rem;
			i++;
			//printf("%lld", rem);
		}
	}
	
	while (i--) {
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
