import math
class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        i= math.isqrt(num)
        return i*i==num