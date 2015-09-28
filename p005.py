def evenlyDivides (num, divisors):
	for divisor in divisors:
		if num%divisor != 0:
			return False

	return True

evenDiv = [11,12,13,14,15,16,17,18,19,20]
i = 17*19*20 # no common factors

while (True):
	if evenlyDivides(i,evenDiv):
		break;
	i += 17*19*20 # no common factors

print i