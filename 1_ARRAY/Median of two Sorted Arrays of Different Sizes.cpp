
/* Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5. */

//-------------------------------------------
/*1. Brute Force Approach*/ 

//Time complex :- O(m+n)
//Space Complex :- O(m+n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        double size = n+m;
        vector<int> nums3(n+m);
        int left=0,right = 0,k=0;
        while(left<n&&right<m){
            if(nums1[left]<=nums2[right]){
                nums3[k++]= nums1[left++];
            }else{
                nums3[k++]=nums2[right++];
            }
        }
        while(left<n) nums3[k++]=nums1[left++];
        while(right<m) nums3[k++]=nums2[right++];
        
        if((n+m)%2==1) return nums3[size/2.0];
        else return (nums3[size/2]+nums3[(size/2)-1])/2.0;
    }
}; 

//2. Optimal Approach

//Time complex :- O(m+n)
//Space Complex :- O(1)

 class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int size = n+m;
        int idx1 = size/2;
        int element1=0;
        int idx2 = (size/2)-1;
        int element2=0;
        int left=0,right = 0,k=0;
        while(left<n&&right<m){
            if(nums1[left]<=nums2[right]){
                if(k==idx1) element1 = nums1[left];
                if(k==idx2) element2 = nums1[left];
                left++;
            }else{
                if(k==idx1) element1 = nums2[right];
                if(k==idx2) element2 = nums2[right];
                right++;
            }
            k++;
        }
        while(left<n){
            if(k==idx1) element1 = nums1[left];
            if(k==idx2) element2 = nums1[left];
            left++;
            k++;
        }
        while(right<m){
            if(k==idx1) element1 = nums2[right];
            if(k==idx2) element2 = nums2[right];
            right++;
            k++;
        }
        
        if(size%2==1) return element1;
        else return (element1+element2)/2.0;
    }
}; 