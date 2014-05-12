#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793238462643383279

int main()
{
	while(1) {
		int r,n;
		scanf("%d%d", &r,&n);
		
		if (r ==  0 && n == 0) {
			break;
		}
		n = n * 2;
		printf("%0.2lf\n", r / (sin(pi / n)));
	}
	return 0;
}

