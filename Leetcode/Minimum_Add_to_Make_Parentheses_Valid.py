class Solution:
    def minAddToMakeValid(self, S: str) -> int:
        count1 = 0
        count2=0
        for i in S:
            if i=='(':
                count1+=1
            else:
                if count1==0:
                    count2+=1
                else:
                    count1-=1
        return count1+count2
