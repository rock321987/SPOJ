/*
  Simple Mathematics
  Based on L.C.M
*/

#include <cstdio>
#include <cstring>

using namespace std;

long long int gcd(long long int x, long long int y)			
{
	if (x == 0) {
    	return y;
  	}
 	
	while (y != 0) {
    	if (x > y) {
      		x = x - y;
    	} else {
      		y = y - x;
    	}
  	}
	return x;
}

int main()
{
	while (1) {
	
		char arr[105];
		scanf("%s", arr);
		long long int i, lcm = 1, flag = 0;
		
		if (arr[0] == '*') {
			break;
		}
		
		for (i = 0;i < strlen(arr);i++) {
			if (arr[i] == 'Y') {
				lcm = (lcm * (i + 1)) / (gcd(lcm, i + 1));
			}
		}
		
		for (i = 0;i < strlen(arr);i++) {
			if (arr[i] == 'N') {
				if (lcm % (i + 1) == 0) {
					flag = 1;
					break;
				}
			}
		}
		if (flag) {
			printf("-1\n");
		} else {
			printf("%lld\n", lcm);
		}
	}
	return 0;
}
