/*
	LITTLE BIT OF MODIFICATION IN SLIDING WINDOW ALGORITHM
*/

#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>

#define get getchar_unlocked

inline int input()
{
    int n = 0, s = 1 ;
    char p = get();
    
	if (p == '-') {
        s = -1 ;
    }
    
    while ((p < '0' || p > '9') && p != EOF && p != '-') {
        p = get( ) ;
    }
    
    if (p == '-') {
        s = -1, p = get() ;
    }
    
    while (p >= '0' && p <= '9') {
        n = (n << 3) + (n << 1) + (p - '0') ;
        p = get() ;
    }
    
    return n * s ;
}


using namespace std;

long int arr[300005];

int main()
{
	int t;
	//scanf("%d", &t);
	t = input();
	while (t--) {
		long int n, totalpeople, maxpeople = 0, x = 0, i, currentbstnumberofstation = 0, currentmaxpeople = 10000005; 
		//scanf("%ld%ld", &n, &totalpeople);
		n = input();
		totalpeople = input();
		for (i = 0;i < n;i++) {
			arr[i] = input();
			//scanf("%ld", &arr[i]);
		}
		
		for (i = 0;i < n;) {
			
			if (maxpeople <= totalpeople) {
				maxpeople += arr[i];
				i++;
			}
			
			if (maxpeople > totalpeople) {
				while (maxpeople > totalpeople) {
					maxpeople -= arr[x];
					x++;
				}
			}
			
			if (fabs(x - i) > currentbstnumberofstation) {
				currentmaxpeople = maxpeople;
				currentbstnumberofstation = fabs(x - i);
			} else if (fabs(x - i) == currentbstnumberofstation) {
				if (maxpeople < currentmaxpeople) {
					currentmaxpeople = maxpeople;
					currentbstnumberofstation = fabs(x - i);
				}
			}
			//printf("%ld		%ld\n", i, x);
		}
		
		printf("%ld %ld\n", currentmaxpeople, currentbstnumberofstation);
	}
	return 0;
}
