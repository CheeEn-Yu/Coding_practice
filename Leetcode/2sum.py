import numpy as np

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums = np.array(nums)
        sorted_idx = np.argsort(nums)
        ptr1 = 0
        ptr2 = len(nums)-1
        while(ptr1 != ptr2):
            if nums[sorted_idx[ptr1]] + nums[sorted_idx[ptr2]] == target:
                break
            elif target > nums[sorted_idx[ptr1]] + nums[sorted_idx[ptr2]]:
                ptr1 += 1
            else:
                ptr2 -= 1

        return [sorted_idx[ptr1], sorted_idx[ptr2]]
        