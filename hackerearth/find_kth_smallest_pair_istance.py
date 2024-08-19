#leetcode 719 - Find K-th Smallest Pair Distance
#approach combining binary search and two-pointer method

def smallest_pair_distnace(self, nums: [List], k: int) -> int:
  nums.sort()
  min_distance = 0
  max_distance = num[-1] - nums[0]
  
  while min_distance < max_distance:
    mid_distance = (min_distance + max_distance) // 2
    if self.count_pairs_within_distance(nums, mid_distance) < k:
      min_distnce = mid_distance + 1
    else:
      max_distance = mid_distance


def count_pairs_within_distance(self, nums: [List], distance: int) -> int:
  count = 0
  left = 0
  
  for right in range(1, len(nums)):
    while nums[right] - nums[left] > distance:
      left += 1
    count += right - left
  return count
    
