int commonFactors(int a, int b) {
    int t=0,n;
    if(a>b) n=b;
    else n=a;
    for(int i=1;i<=n;i++){
        if(a%i==0){
            if(b%i==0){
                t++;
            }
        }
    }
    return t;
}