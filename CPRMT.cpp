/*
	Frequency counting
*/

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>

using namespace std;

class cprmt {
	public:
		void calculate()
		{
			char arr1[100005], arr2[100005];
			
			while ((scanf("%s%s", arr1, arr2)) != EOF) {
				int freq1[256] = {0}, freq2[256] = {0};
				
				for (int i = 0;i < strlen(arr1);i++) {
					freq1[arr1[i]]++;
				}
				
				for (int i = 0;i < strlen(arr2);i++) {
					freq2[arr2[i]]++;
				}
				
				for (int i = 95;i < 130;i++) {
					if (freq1[i] > 0 && freq2[i] > 0) {
						for (int j = 0;j < (freq1[i] > freq2[i] ? freq2[i] : freq1[i]);j++) {
							printf("%c", i);
						}
					}
				}
				printf("\n");
			}
		}
};

int main()
{
	cprmt obj;
	obj.calculate();
	
	return 0;
}
