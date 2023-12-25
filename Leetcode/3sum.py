class Solution:
    def threeSum(self, nums):
        nums.sort()
        ans = []
        first = 0
        second = first + 1
        last = len(nums) - 1
        while(first <= last-2):
            if first > 0 and nums[first] == nums[first-1]:
                first += 1
                second = first+1
                continue
            while(second < last):
                if second > first + 1 and nums[second] == nums[second-1]:
                    second+=1
                    continue

                if nums[first] + nums[second] + nums[last] == 0:
                    ans.append([nums[first] , nums[second] , nums[last]])
                    second+=1
                elif nums[first] + nums[second] + nums[last] < 0:
                    second+=1
                elif nums[first] + nums[second] + nums[last] > 0:
                    last -= 1
            first+=1
            second = first + 1
            last = len(nums) - 1

        return ans

if __name__ == '__main__':
    sol = Solution()
    nums = [-1,0,1,2,-1,-4,-2,-3,3,0,4]
    nums.sort()
    print(nums)
    print(sol.threeSum(nums))