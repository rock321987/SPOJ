/*
  GCD..
  Adding sieve is making time limit worst..so no need to use sieve
*/

#include <bits/stdc++.h>

#define MAX 1000005

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

int main()
{
	//sieve();
	long int t;
	//scanf("%ld", &t);
	t = input();
	while (t--) {
		long int a, b;
		//scanf("%ld%ld", &a, &b);
		a = input();
		b = input();
		
		long long int x = __gcd(a, b);
		long int cnt = 0;
			
		for (long long int i = 1;i * i <= x;i++) {
			if (x % i == 0) {
				cnt += 2;
			}
			if (i * i == x) {
				cnt--;
			}
		}
		printf("%ld\n", cnt);
	}
 	return 0;
}
