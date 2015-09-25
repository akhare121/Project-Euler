import math

def isPrime (num, primes):
	for prime in primes:
		if num % prime == 0:
			return False

	return True

TARGET = 600851475143
primes = [2]
biggest = 0
for i in xrange(3,int(math.sqrt(TARGET))):
	if TARGET%i == 0 and isPrime(i,primes):
		primes.append(i)
		biggest = i

print biggest
