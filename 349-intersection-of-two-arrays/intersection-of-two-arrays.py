class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        i=[item for item in set(nums1) if item in set( nums2)]

        return i
        