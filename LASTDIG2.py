t = input()
i = 1

while i <= t:
	i += 1
	a, b = [int(x) for x in raw_input().split()]
	#b = b % 4
	print pow(a, b, 10)

