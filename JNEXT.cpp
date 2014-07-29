/*
  Ad-hoc..String Manipulation
*/

#include <bits/stdc++.h>

using namespace std;

class FindNext {
	public:
		string calculate(string arr)
		{
			long int i;
			int pos, flag = 0;
			char x;
			for (i = arr.length();i > 0;i--) {
				if (arr[i] > arr[i - 1]) {
					x = arr[i - 1];
					pos = i - 1;
					flag = 1;
					break;
				}
			}
			int newpos;
			if (flag == 0) {
				arr = "-1";
			} else {
				for (i = pos + 1;i < arr.length();i++) {
					if (arr[i] > x && arr[pos] < arr[i]) {
						newpos = i;
					}
				}
				swap(arr[newpos], arr[pos]);
				sort(arr.begin() + pos + 1, arr.end());
			}
			return arr;
		}
};

int main()
{
	int t;
	scanf("%d", &t);
	FindNext obj;
	
	while (t--) {
		long int n;
		int x;
		string arr;
		scanf("%ld", &n);
		
		for (long int i = 0;i < n;i++) {
			scanf("%d", &x);
			arr.push_back(x + '0');
		}
		cout << obj.calculate(arr) << endl;
	}
 	return 0;
}
