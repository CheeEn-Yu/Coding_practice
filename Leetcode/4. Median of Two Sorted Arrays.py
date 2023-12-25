class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
            # idea 1: merge two array, then len(arr)/2的元素或( len(arr) + len(arr)+1)/2
        arr = []
        i,j = 0,0
        while(i < len(nums1) and j < len(nums2)):
            if nums1[i] <= nums2[j]:
                arr.append(nums1[i])
                i+=1
            else:
                arr.append(nums2[j])
                j+=1
        if i != len(nums1):
            for res in nums1[i:]:
                arr.append(res)
        elif j != len(nums2):
            for res in nums2[j:]:
                arr.append(res)
        if len(arr) % 2:
            return arr[len(arr)//2]
        else:
            return (arr[len(arr)//2 - 1] + arr[len(arr)//2])/2

