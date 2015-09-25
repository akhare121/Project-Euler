import math

sqSum = int(math.pow(sum(range(1,101)),2))
sumSq = sum([x*x for x in xrange(1,101)])

print abs(sqSum-sumSq)
