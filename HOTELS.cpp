#include <cstdio>

using namespace std;

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

long int arr[300005];

int main()
{
	/*int t;
	scanf("%d", &t);
	
	while (t--) {*/
		long int n, sum, maxsum = 0, x = 0, i, currentbst = 0; 
		//scanf("%ld%ld", &n, &sum);
		n = input();
		sum = input();
		for (i = 0;i < n;i++) {
			//scanf("%ld", &arr[i]);
			arr[i] = input();
		}
		
		for (i = 0;i < n;) {
			
			if (maxsum <= sum) {
				maxsum += arr[i];
				i++;
			}
			
			if (maxsum > sum) {
				while (maxsum > sum) {
					maxsum -= arr[x];
					x++;
				}
				//i = x;
			}
			if (maxsum > currentbst) {
				currentbst = maxsum;
			}
			//printf("%ld	maxsum	=%ld\n", i, maxsum);
		}
		output(currentbst);
	//}
	return 0;
}
