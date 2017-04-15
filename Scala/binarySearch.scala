def binarySearch(list: Array[Int], target: Int): Int = {
	var left = 0
	var right = list.length - 1
	while (left <= right)
	{
		val mid = left + (right - left) / 2
		if(list(mid) == target)
			return mid
		else if (list(mid) > target)
			right = mid - 1
		else
			left = mid + 1
	}
	-1
}

var n = Array(1, 2, 3, 4, 5, 6, 7, 8, 9, 100)

var position = binarySearch(n, 9)

if(position == -1)
	println("Element not found!")
else println("Element at index: " + position)

