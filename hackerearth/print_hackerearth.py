n = int(input())
line = input()
line = list(line)

count = 0
hackerearth = 'hackerearth'

while (len(line)>0):
    n = 0
    for i in hackerearth:
        if i in line:
            line.remove(i)
            n = n + 1
    if n == 11:
        count = count + 1
print (count)

