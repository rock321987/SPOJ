#include <cstdio>

using namespace std;

long int arr[1000005] = {0};

void solve()
{
	long int i, j, k , s = 1000;
	
	for (i = 1;i <= s;i++) {
		for (j = i + 1;j <= s;j++) {
			for (k = 1;k * (i * i + j * j) <= s * s;k++) {
				arr[k * (i * i + j * j)] = 1;
			}
		}
	}
}

int main()
{
	solve();
	
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long int n;
		scanf("%ld", &n);
		printf(arr[n] ? "YES\n" : "NO\n");
	}
	return 0;
}
