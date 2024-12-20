class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max=0;
        for(int i : arr)
        {
            if(i>max)
            {
                max = i;
            }
        }
        return max;
    }
};