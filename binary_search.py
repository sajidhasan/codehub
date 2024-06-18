def binary_search(data, target, low, high):
    if low > high:
        return False
    else:
        mid = (low + high)  / 2
        if target == data[mid]:
            return True
        elif target < data[mid]:
            return binary_search(data, target, low, mid - 1)
        else:
            return binary_search(data, target, mid + 1, high)


data = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
right_target = 7
wrong_target = 29
if binary_search(data, right_target, 0, len(data)-1):
    print(0)
else:
    print(1)
