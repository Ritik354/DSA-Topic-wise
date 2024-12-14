/* search a single target in array using binary search to optimize searching */
/* Time Complexity : O(log n) */

/* Recursive approach */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &arr, int target,int srt, int end)
    {
        int mid = 0;
        while (srt <= end)
        {
            /* mid = (srt + end) / 2; //for large value it can cause overflow condition*/
            mid = srt +(end-srt)/2;// prevents overflow
            if (target < arr[mid])
            {
                end = mid - 1;
                search(arr,target,srt,end);
            }
            else if (target > arr[mid])
            {
                srt = mid + 1;
                search(arr,target,srt,end);
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
    
    int end = arr.size()-1,srt=0;
    Solution obj;
    int result = obj.search(arr,target,srt,end);
    cout<< " result = " << result;
}