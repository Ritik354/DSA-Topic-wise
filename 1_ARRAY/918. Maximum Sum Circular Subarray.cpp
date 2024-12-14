/* 918. Maximum Sum Circular Subarray
Solved
Medium
Topics
Companies
Hint
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

 

Example 1:

Input: nums = [1,-2,3,-2]
Output: 3
Explanation: Subarray [3] has maximum sum 3.
Example 2:

Input: nums = [5,-3,5]
Output: 10
Explanation: Subarray [5,5] has maximum sum 5 + 5 = 10.
Example 3:

Input: nums = [-3,-2,-3]
Output: -2
Explanation: Subarray [-2] has maximum sum -2
 */

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minSUM =nums[0], numsSUM=0,currSUM=nums[0],maxSUM=nums[0];
        int n=nums.size();
        
        /*Find min_sum of sub array using kadanes algo*/
        for(int str=1;str<n;str++)
        {
            currSUM = min(currSUM+nums[str],nums[str]);
            minSUM = min(currSUM,minSUM);
        }
        /* MAX SUM OF ARRAY */
        currSUM=nums[0];
        for(int str=1;str<n;str++)                  
        {   
        currSUM = max(currSUM+nums[str],nums[str]);
        maxSUM = max(maxSUM,currSUM);
    
        }   
        /*Finding total sum of array*/
        for(int i=0;i<n;i++)
        {
            numsSUM +=nums[i];
        }
        
        /*now substract total array sum with min sum to get max sum*/
        int sum = numsSUM-minSUM;
        if(maxSUM>0)
        {
            return max(maxSUM,sum);
        }
        return maxSUM;
    }
};