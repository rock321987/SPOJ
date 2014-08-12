/*
  Ad-hoc..interest calculation
*/

#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		long int principle, tmp;
		scanf("%ld", &principle);
		int time, operations;
		char ch[2];
		scanf("%d%d", &time, &operations);
		long long int interest, max = 0;
		long double rate;
		long int deduction;
		
		while (operations--) {
			scanf("%s%Lf%ld", ch, &rate, &deduction);
			
			tmp = principle;
			interest = 0;
			
			if (ch[0] == '0') {
				for (int i = 0;i < time;i++) {
					interest += tmp * rate;
					tmp -= deduction;
					//printf("interest	= %lld\n", interest);
				}
				tmp += interest;
				if (tmp > max) {
					max = tmp;
				}
			} else {
				for (int i = 0;i < time;i++) {
					interest = tmp * rate;
					tmp += interest - deduction;
				}
				
				if (tmp > max) {
					max = tmp;
				}
			}
		}
		printf("%lld\n", max);
	}
 	return 0;
}

