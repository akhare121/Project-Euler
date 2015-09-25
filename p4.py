def isPalindrome (string):
	for i in xrange(0,len(string)/2):
		if string[i] != string[len(string)-1-i]:
			return False

	return True

TARGET = 999
largestPal = 0

for i in reversed(xrange(1000)):
	for c in reversed(xrange(i+1)):
		if (i*c > largestPal and isPalindrome(str(i*c))):
			largestPal = i*c
			break

print largestPal