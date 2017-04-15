def locate(prices):
	for i in range(items):
		for j in range(i+1, items):
			if prices[i]+prices[j] == credit:
				return [i, j]

in_file = open('A-large-practice.in', 'r')
out_file = open('large.out', 'w')

cases = int(in_file.readline())

for case in range(1, cases+1):
	credit = int(in_file.readline())
	items = int(in_file.readline())
	prices = [int(n) for n in in_file.readline().split()]
	location = locate(prices)

	result = 'Case #{}: {} {}\n'.format(case, location[0]+1, location[1]+1)
	print (result)
	out_file.write(result)


in_file.close()
out_file.close()