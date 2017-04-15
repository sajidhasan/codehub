def reversed(words):
	words.reverse()
	return ' '.join(words)

input_file = open('B-large-practice.in', 'r')
output_file = open('large.out', 'w')

cases = int(input_file.readline())

for case in range(1, cases + 1):
	words = [n.strip() for n in input_file.readline().split()]
	res = reversed(words)

	res_out = 'Case #%s: %s\n' %(case, res)
	print (res_out)
	output_file.write(res_out)


input_file.close()
output_file.close() 