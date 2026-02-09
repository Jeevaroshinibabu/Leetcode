void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int l=m;
    for (int i=0;i<n;i++){
        nums1[l]=nums2[i];
        l++;
    }
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-i-1;j++){
            if(nums1[j]>nums1[j+1]){
                int t=nums1[j];
                nums1[j]=nums1[j+1];
                nums1[j+1]=t;
            }
        }
    }
    
}