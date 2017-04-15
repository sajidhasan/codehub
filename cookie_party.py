line = input().split()
n, m = int(line[0]), int(line[1])

print ((m % n == 0) ? 0 : (m / n + 1) * n - m)
