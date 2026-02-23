class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        i=0
        for p in num:
            i=i*10+p
        i=i+k
        n=[]
        while i!=0:
            n.append(i%10)
            i//=10
        return n[::-1]
        