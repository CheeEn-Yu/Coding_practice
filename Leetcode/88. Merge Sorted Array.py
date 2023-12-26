class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums1 = nums1[:m]
        nums1 = nums1+nums2
        nums1.sort()
        return nums1
    
if __name__ == '__main__':
    sol = Solution()
    nums1 = [1,2,3,0,0,0]
    m = 3
    nums2 = [2,5,6] 
    n = 3
    print(sol.merge())