/*
  Quadratic equation..O(1) solution
*/

#include <cstdio>
#include <cmath>

#define li long int

using namespace std;

int main()
{
	li t;
	scanf("%ld", &t);
	
	while (t--) {
		li h, p , a;
		scanf("%ld%ld%ld", &h, &p, &a);
		
		if (p >= h) {
			printf("1\n");
		} else {
			long int res = ceil(((p - 2.0 * a) - sqrt(pow((p - 2.0 * a), 2.0) + 8.0 * p * (h - a))) / (-2.0 * p));
			printf("%ld\n", res * 2 - 1);
		}
	}

 	return 0;
}
