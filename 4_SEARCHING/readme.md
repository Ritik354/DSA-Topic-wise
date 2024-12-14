<!-- top 5 binary searching questions to remember -->
<!--1. Floor in a Sorted Array -->

<!-- class Solution {
  public:

int findFloor(vector<int>& arr, int k) {

        // Your code here
        int start=0,end = arr.size()-1;
        int ans;
        while(start<=end)
        {
            int mid =start+(end-start)/2;
            if(k<=arr[mid])
            {
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        if(ans>0)
        {
            return ans-1;
        }else
            return -1;
    }
}; -->
<!--2. ceil in a Sorted Array -->
