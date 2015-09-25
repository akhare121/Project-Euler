f = 1
s = 2
tot = 0

while (s < 4000000):
	if (s%2 == 0):
		tot += s

	f,s = s,f+s

print tot