class Solution:
    def check_prime(self,num):
        if num<=1:
            return False
        if num<=3:
            return True
        if num%2==0 or num%3==0:
            return False
        i=5
        while i*i<=num:
            if num%i==0 or num%(i+2)==0:
                return False
            i+=6
        return True
    def completePrime(self, num: int) -> bool:
        pref=0
        suff=0
        mul=1
        while num>0:
            suff+=(num%10)*mul
            pref=num
            if not self.check_prime(suff) or not self.check_prime(pref):
                return False
            num//=10
            mul*=10
        return True
            
        