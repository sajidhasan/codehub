n = int(input())
line = input().split()
line = [int(x) for x in line]
line2 = input().split()
q = int(line2[0])
x = int(line2[1])
size = -1
new_l = []
for i in range(q):

    cmd = input()
    if cmd == "Harry":
        new_l.append(line.pop(0))
    elif cmd == "Remove":
        new_l.pop()

    if x == sum(new_l) and size == -1:
        size = len(new_l)

print(size)
