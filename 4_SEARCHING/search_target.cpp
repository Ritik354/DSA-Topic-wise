/* search a single target in array using binary search to optimize searching */
/* Time Complexity : O(log n) */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size() - 1;
        int srt = 0, end = n;
        int mid = 0;
        while (srt <= end)
        {
            /* mid = (srt + end) / 2; //for large value it can cause overflow condition*/
            mid = srt +(end-srt)/2;// prevents overflow
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else if (target > arr[mid])
            {
                srt = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
int main()
{
    int target =3;
    vector<int> arr = {-1, 3, 6, 8, 10, 12};
    Solution obj;
    int result = obj.search(arr,target);
    cout<< " result = " << result;
}