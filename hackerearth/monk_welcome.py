n = int(input())

n1 = input().split()
n1 = [int(x) for x in n1]
n2 = input().split()
n2 = [int(y) for y in n2]

for i in range(n):
    print(n1[i]+n2[i], end=" ")
