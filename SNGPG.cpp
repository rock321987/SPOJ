/*
  Observe for different a and b value
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int a, b, cnt = 0;
		scanf("%d%d", &a, &b);
		
		if (a < 4) {
			if (b < 4) {
				for (int i = a;i <= b;i++) {
					cnt++;
				}
			} else {
				cnt = 4 - a;
			}
		}
		printf("%d\n", cnt);	
	}
 	return 0;
}
