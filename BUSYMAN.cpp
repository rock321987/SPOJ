/*
  Activity Selection Algorithm
*/

#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair <int, int> x, pair <int, int> y)
{
	if (x.second < y.second) {
		return true;
	}
	return false;
}

long int calculate(vector < pair <long int, long int > > arr)
{
	long int i = 0, cnt = 1;
	
	for (long int j = 1;j < arr.size();j++) {
		if (arr.at(j).first >= arr.at(i).second) {
			cnt++;
			i = j;
		}
	}
	return cnt;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		vector < pair <long int, long int> > arr;
		long int n, x, y;
		scanf("%ld", &n);
	
		for (long int i = 0;i < n;i++) {
			scanf("%ld%ld", &x, &y);
			arr.push_back(make_pair(x, y));
		}
	
		sort(arr.begin(), arr.end(), compare);
	
		long int cnt = calculate(arr);
		printf("%ld\n", cnt);
	}
 	return 0;
}
