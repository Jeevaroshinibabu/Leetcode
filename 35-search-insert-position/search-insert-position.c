int searchInsert(int* nums, int numsSize, int target) {
    int n=-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            n=i;
        }
    }
    if(n!=-1){
        return n;
    }else{
       int l=0,r=numsSize;
       while(l<r){
        int m=l+(r-l)/2;
        if(nums[m]<target){
            l=m+1;
        }else{
            r=m;
        }
       }
       return l;
    }
}