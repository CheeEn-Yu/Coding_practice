class Solution:
    def intToRoman(self, num: int) -> str:
        '''
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
        '''
        ans = ''
        M = num//1000
        num = num - M*1000
        D = num//500
        num = num - D*500
        C = num//100
        num = num - C*100
        L = num//50
        num = num - L*50
        X = num//10
        num = num - X*10
        V = num//5
        num = num - V*5
        I = num
        nums = [I, V, X, L, C, D, M]
        # print([I, V, X, L, C, D, M])
        for num, roman in enumerate(['I', 'V', 'X', 'L', 'C', 'D', 'M']):
            if roman == 'I' and I == 4:
                if V == 1:
                    ans+='XI'
                    nums[1]-=1
                elif V==0:
                    ans+='VI'
                continue
            if roman == 'C' and C == 4:
                if D == 1:
                    ans+='MC'
                    nums[5]-=1
                elif D == 0:
                    ans+='DC'
                continue
            if roman == 'X' and X == 4:
                if L == 1:
                    ans+='CX'
                    nums[3]-=1
                elif L == 0:
                    ans+='LX'
                continue
            ans += nums[num]*roman

            
        return ans[::-1]
    
if __name__ == '__main__':
    sol = Solution()
    print(sol.intToRoman(40))