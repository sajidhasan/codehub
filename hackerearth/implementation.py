line = input()
nums = [int(x) for x in line]

for m in range(10):
    count = 0
    for n in nums:
        if m == n:
            count = count + 1
    print(m, count)
