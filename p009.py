import math

ac = bc = cc = 0
for a in xrange(1,1000/3+1):
	for b in xrange(1,(1000-a)/2+1):
		c = 1000-a-b

		if math.pow(a,2) + math.pow(b,2) == math.pow(c,2):
			ac = a
			bc = b
			cc = c
			break

	if ac > 0:
		break

print a*b*c
