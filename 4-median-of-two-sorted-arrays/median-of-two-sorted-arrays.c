double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int t[nums1Size+nums2Size];
    int x=0;
    for(int i=0;i<nums1Size+nums2Size;i++){
        if(i<nums1Size) t[i]=nums1[i];
        else t[i]=nums2[x++];
    }
    for(int i=0;i<nums1Size+nums2Size;i++){
        for(int j=i+1;j<nums1Size+nums2Size;j++){
            if(t[i]>t[j]){
                int a=t[i];
                t[i]=t[j];
                t[j]=a;
            }
        }
    }
    if((nums1Size+nums2Size)%2==0){
        int l=(nums1Size+nums2Size)/2;
        return (t[l]+t[l-1])/2.00;
    }else{
        return t[(nums1Size+nums2Size)/2];
    }
}