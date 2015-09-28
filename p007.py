def isPrime (num, primes):
	for prime in primes:
		if num % prime == 0:
			return False

	return True

primes = [2,3,5,7,11,13]
at = 14
while (len(primes) < 10002):
	if (isPrime(at,primes)):
		primes.append(at)

	at += 1

print primes[10000]
