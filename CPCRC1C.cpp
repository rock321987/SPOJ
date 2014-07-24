/*
  Mathematics..
  for more info read http://math.stackexchange.com/questions/817038/sum-of-digits-of-number-from-1-to-n
*/

#include <bits/stdc++.h>

using namespace std;

long int arr[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

long long int calcsum(long int x)
{
	if (x < 10) {
		return (x * (x + 1)) / 2;
	}
	
	int a, i;
	long int b;
	
	for (i = 0;i <= 9;i++) {
		if (x / arr[i] < 10) {
			a = x / arr[i];
			b = x % arr[i];
			break;
		}
	}
	return ((45 * a * i) * pow(10, i - 1) + ((a * (a - 1)) / 2) * pow(10, i) + a * (b + 1) + calcsum(b));
}

int main()
{
	long int x, y;	
	while (1) {
		scanf("%ld%ld", &x, &y);
		
		if (x == -1 || y == -1) {
			break;
		}
		
		printf("%lld\n", calcsum(y) - calcsum(x - 1));
	}
 	return 0;
}
