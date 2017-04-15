# your code goes here
from itertools import permutations
def perms(word):
	perms = [''.join(p) for p in permutations(word)]
	perms = list(set(perms))
	return perms

p = perms('Sajid')

for i in range(len(p)):
	print(p[i])
