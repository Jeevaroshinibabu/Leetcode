class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        i=int(''.join(map(str,digits)))
        i=i+1
        return list(map(int,str(i)))