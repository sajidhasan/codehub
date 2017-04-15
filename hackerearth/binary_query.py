line = input().split()
n = [int(x) for x in line]
nums = input().split()
for x in range(n[1]):
    query = input().split()
    query = [int(y) for y in query]
    if len(query) == 3:
        num = "".join(nums)
        num = num[(query[1]-1):(query[2]-1)]
        num = int(num, 2)
        if (num & 1) == 0:
            print ("EVEN")
        else:
            print("ODD")
    else:
        continue
