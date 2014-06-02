/*
  Mathematics...probability and expectation
*/

#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, i;
		double sum = 0.0;
		scanf("%d", &n);

		for (i = 1;i <= n;i++) {
			sum += (1.0 / i);
		}
		printf("%0.2lf\n", sum * n);
	}
	return 0;
}
