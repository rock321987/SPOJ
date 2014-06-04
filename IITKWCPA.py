# Ad-hoc..set data structure

from sets import Set
t = input()
i = 1

while i <= t:
	i += 1
	str = raw_input()
	print len(Set(str.split()))
