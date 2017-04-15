while True:
    line = input()
    if line == '':
        break
    line = line.split()
    line[0], line[1] = int(line[0]), int(line[1])
    print(abs(line[0]-line[1]))
