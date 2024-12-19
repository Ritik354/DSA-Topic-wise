
/* Kth Missing Positive Number in a Sorted Array */

/* Given a sorted array of distinct positive integers arr[], we need to find the kth positive number that is missing from arr[].

Examples :

Input: arr[] = [2, 3, 4, 7, 11], k = 5
Output: 9
Explanation: Missing are 1, 5, 6, 8, 9, 10… and 5th missing number is 9.
Input: arr[] = [1, 2, 3], k = 2
Output: 5
Explanation: Missing are 4, 5, 6… and 2nd missing number is 5.
Input: arr[] = [3, 5, 9, 10, 11, 12], k = 2
Output: 2
Explanation: Missing are 1, 2, 4, 5, 6… and 2nd missing number is 2.
Constraints:
1 <= arr.size() <= 105
1 <= k <= 105
1 <= arr[i]<= 106 */

/* 1. Brute Force Approach */
/* #include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kthMissing(vector<int> &arr, int k)
    {
        // Your code goes here
        int count = 1, n = arr.size(), i = 0;
        while (i <n &&k>0)
        {
            if (arr[i] == count )
            {
                i++;
            }else{
                k--;
            }
            count++;
        }
        while(k--){
           count++;
        }
        return count;
    }
};
int main()
{
    vector<int> arr = {1, 2, 3};
    int index = 2;
    Solution obj;
    int result = obj.kthMissing(arr, index);
    cout << "Ans : " << result;
    return 0;
} */
/* Potential Issues with Brute Force
Inefficiency: If the array is large or k is very large, the brute force method may take significant time to find the answer. For example:
Input: arr = [1, 3, 7], k = 1000

A brute force solution will loop from 1 up to 1000 and cross-check against the array repeatedly.

Memory Usage: If your brute force approach involves storing large amounts of data (like generating a complete list of missing numbers), it may lead to memory issues.

Optimizing Your Approach
Once your brute force approach works for all test cases, consider transitioning to an optimized approach:

Binary Search:

Use binary search to quickly determine how many numbers are missing up to any index in the array.
Complexity: 𝑂(log𝑛)

Mathematical Calculation:

If the array is sorted, you can calculate the number of missing numbers directly using the difference between actual and expected values at each index. */

/* 2.  Optimized Approach*/

// Using binary Search
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kthMissing(vector<int> &arr, int k) {
        // Optimized solution
        
        int n=arr.size();
        int low = 0,high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low + k;
    }
};
int main()
{
    vector<int> arr = {1, 2, 4,5,7,8};
    int index = 5;
    Solution obj;
    int result = obj.kthMissing(arr, index);
    cout << "Ans : " << result;
    return 0;
}