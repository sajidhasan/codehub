t = int(input())
for i in range(t):
    line = input().split()
    n = [int(x) for x in line]
    if (n[2] - n[1] == n[1] - n[0]):
        print(n[0]*n[3])
    else:
        print("Error")
