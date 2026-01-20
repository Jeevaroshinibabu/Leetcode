int subtractProductAndSum(int n) {
    int a=n,re=1,rm=0,r=0,m=0;
    while(n>0)
    {  rm=n%10;
        re*=rm;
        n=n/10;
    }
    while(a>0){
     r=a%10;
     m=m+r;
     a=a/10;
    }
    return re-m;
}