#include <cstdio>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld", &t);
	
	while (t--) {
		long long int y, res;
		scanf("%lld", &res);
		char ch[2];
		
		while (1) {
			scanf("%s", &ch);
			if (ch[0] == '=') {
				break;
			}
			scanf("%lld", &y);
			
			//printf("%lld	%lld\n", res, y);
			if (ch[0] == '+') {
				res += y;
			} else if (ch[0] == '-') {
				res -= y;
			}  else if (ch[0] == '*') {
				res *= y;
			}  else if (ch[0] == '/') {
				res /= y;
			}	
		}
		printf("%lld\n", res);
	}
	return 0;
}
