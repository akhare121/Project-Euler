def isPrime (num, primes):
	for prime in primes:
		if num % prime == 0:
			return False

	return True

primes = [2]
tot = 2
for i in xrange(3,2000001,2):
	print i
	if isPrime(i,primes):
		primes.append(i)
		tot += i

print tot
