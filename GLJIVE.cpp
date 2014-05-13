/*
  the problem is very easy except for its poor description
*/

#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
   int arr[10], i, sum = 0;
   
   for (i = 0;i < 10;i++) {
      scanf("%d", &arr[i]);
   }
   
   for (i = 0;i < 10;i++) {
      if (sum + arr[i] <= 100) {
         sum += arr[i];
      } else {
         break;
      }
   }
   
   if (sum == 100) {
      
   } else {
      if ((100 - sum) >= (sum + arr[i] - 100) && i < 10) {
         sum += arr[i];
      }
   }
   printf("%d\n", sum);
   return 0;
}

