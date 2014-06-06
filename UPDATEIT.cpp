/*
  Ad-hoc..based on updation of array
*/

#include <cstdio>
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

#define y putchar_unlocked

inline void output(int k)
{
	int n = k, i = 0;
	char ch[15];
	
	if (n <= 0) {
		if(n == 0) {
			y('0');
		} else {
			y('-');
		}
		n = n * -1;
	}
	
	while (n > 0) {
		ch[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	
	while (i > 0) {
		y(ch[i - 1]);
		i--;
	}
	
	y('\n');
}

using namespace std;

int main()
{
	int t;
	//scanf("%d", &t);
	t = input();
	
	while (t--) {
		long int n, u, l, r, v, i, sum = 0;
		//scanf("%ld%ld", &n, &u);
		n = input();
		u = input();
		long int arr[10005] = {0};
		
		for (i = 0;i < u;i++) {
			//scanf("%ld%ld%ld", &l, &r, &v);
			l = input();
			r = input();
			v = input();
			arr[l] += v;
			arr[r + 1] -= v;
		}
		sum = arr[0];
		for (i = 1;i < n;i++) {
			sum += arr[i];
			arr[i] = sum;
			//printf("%ld\n", arr[i]);
		}
		long int q, x;
		//scanf("%ld", &q);
		q = input();
		
		while (q--) {
			//scanf("%ld", &x);
			x = input();
			//printf("%ld\n", arr[x]);
			output(arr[x]);
		}
	}
	return 0;
}
