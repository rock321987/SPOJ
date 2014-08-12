/*
  Mathematics
*/

#include <cstdio>
#include <cmath>

#define REP(i, n) for (i = 1;i <= n;i++)

using namespace std;

int main()
{
	int t, i;
	scanf("%d", &t);
	
	REP(i, t) {
		unsigned long long int n;
		double x;
		scanf("%llu", &n);
		x = sqrt(n);
		
		if (floor(x) == ceil(x)) {
			printf("Case %d: Yes\n", i);
		} else {
			printf("Case %d: No\n", i);
		}
	}
 	return 0;
}
