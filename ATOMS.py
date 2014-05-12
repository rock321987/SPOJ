#Ad-hoc

i = 1;
 
t = input();
 
while i <= t:
	i += 1;
	n, k , m = [int(x) for x in raw_input().split()];
	res = n;
	cnt = 0;
	
	while 1:
		res *= k;
		if res > m:
			break;
		else:
			cnt += 1;
			
	print cnt 
