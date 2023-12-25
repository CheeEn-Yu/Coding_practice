class Solution:
    def minOperations(self, s: str) -> int:
        # check 01010101...
        # check 10101010
        n=len(s)
        op=[0,0]
    
        for i in range(0, n, 2):
            op[ord(s[i])&1]+=1
            if i+1<n:
                op[1-(ord(s[i+1])&1)]+=1
        return min(op[0], op[1])        

if __name__ == '__main__':
    s = "10010100"
    sol = Solution()
    print(sol.minOperations(s))