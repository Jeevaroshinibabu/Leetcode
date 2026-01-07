int trailingZeroes(int n) {
   int c=0;
   long long p=5;
   while(p<=n){
    c+=n/p;
    if(p>LLONG_MAX/5) break;
    p*=5;
   }
   return c;
}