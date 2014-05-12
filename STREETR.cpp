#include <cstdio>

using namespace std;

long int gcd(long int a, long int b)
{
	long int r;
	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	long int arr[n], calc_gcd = 0, sum = 0;
	scanf("%ld", &arr[0]);
	sum += arr[0];
	
	for (i = 1;i < n;i++) {
		scanf("%ld", &arr[i]);
		sum += arr[i];
		calc_gcd = gcd(calc_gcd, arr[i] - arr[i - 1]);
	}
	long int number_of_terms = ((arr[n - 1] - arr[0]) / calc_gcd) + 1;
	//number_of_terms /= 2;
	//long int final = (number_of_terms * (arr[0] + arr[n - 1])) / 2 - sum;
	
	printf("%ld\n", number_of_terms - n);
	
	return 0;
}
