int sumOfMultiples(int n) {
    int k[10000],t=0,s=0;
    for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0) k[t++]=i;
    }
for(int i=0;i<t;i++){
    s+=k[i];
}
    return s;
}