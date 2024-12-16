// K-th element of two Arrays
/* Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.

Examples :

Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final combined sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.
Input: a[] = [100, 112, 256, 349, 770], b[] = [72, 86, 113, 119, 265, 445, 892], k = 7
Output: 256
Explanation: Combined sorted array is [72, 86, 100, 112, 113, 119, 256, 265, 349, 445, 770, 892]. The 7th element of this array is 256. */

// brute force approach
class Solution
{
public:
    int kthElement(vector<int> &a, vector<int> &b, int k)
    {
        // code here
        int left = a.size() - 1, right = 0;

        while (left >= 0 && right < b.size())
        {
            if (a[left] > b[right])
            {
                swap(a[left--], b[right++]);
            }
            else
                break;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        left = a.size(), right = 0;
        if (left >= k)
        {
            return a[k - 1];
        }
        else
        {
            return b[k - left - 1];
        }
    }
};

// optimal approach  Time Complexity: O(log(min(a, b)))
class Solution
{
public:
    int kthElement(vector<int> &a, vector<int> &b, int k)
    {
        // code here
        if (a.size() > b.size())
            return kthElement(b, a, k);

        int left = k; // length of left half
        int m = a.size(), n = b.size();
        // apply binary search:
        int low = max(0, k - n), high = min(k, m);
        while (low <= high)
        {
            int mid1 = (low + high) >> 1;
            int mid2 = left - mid1;
            // calculate l1, l2, r1 and r2;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            if (mid1 < m)
                r1 = a[mid1];
            if (mid2 < n)
                r2 = b[mid2];
            if (mid1 - 1 >= 0)
                l1 = a[mid1 - 1];
            if (mid2 - 1 >= 0)
                l2 = b[mid2 - 1];

            if (l1 <= r2 && l2 <= r1)
            {
                return max(l1, l2);
            }

            // eliminate the halves:
            else if (l1 > r2)
                high = mid1 - 1;
            else
                low = mid1 + 1;
        }
        return 0; // dummy statement
    }
};