int numTrees(int n) {
    long r=1;
    for(int i=0;i<n;i++){
        r=r*2*(2*i+1)/(i+2);
    }
    return (int)r;
}