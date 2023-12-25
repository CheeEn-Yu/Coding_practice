class Solution:
    def reverse(self, x: int) -> int:
        arr = [i for i in str(x)]
        if arr[0] != '-':
            arr.reverse()
        else:
            arr = arr[1:]
            arr.reverse()
            arr.insert(0, '-')
        ans = ''
        for i in arr:
            ans += i
        if len(ans) >= 10:
            if ans[0] != '-' and ans > '2147483647':
                return 0
            elif len(ans) > 10 and ans > '-2147483648':
                return 0
            
        return(int(ans))
    
if __name__ == '__main__':
    sol = Solution()
    print(sol.reverse(-2147483412))