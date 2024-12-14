#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here'
        sort(arr.begin(),arr.end());
        vector<int> nums;
        
        int j=0;
        for(int i=1;i<arr.size();i++)
        {
            if(nums[i]==0||arr[i-1]==arr[i])
            {
                nums.push_back(arr[i]);
            }
        }
        return nums;
    }
};
int main() {
   
    vector<int> a ={2, 3, 1, 2, 3};
    Solution obj;
    vector<int> result = obj.findDuplicates(a);
    cout<<endl<<"result :";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
    return 0;
}
