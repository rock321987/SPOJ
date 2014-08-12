/*
  Searching and sorting
*/

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int n, m, x, cnt = 0;
		scanf("%d%d", &n, &m);
		vector <int> arr;
		
		for (int i = 0;i < n;i++) {
			scanf("%d", &x);
			arr.push_back(x);
		}
		
		sort(arr.begin(), arr.end());
		
		for (int i = 0;i < n;i++) {
			if (binary_search(arr.begin(), arr.end(), m - arr.at(i))) {
				cnt++;
			}
		}
		
		printf("%d\n", cnt / 2);
	}

 	return 0;
}

