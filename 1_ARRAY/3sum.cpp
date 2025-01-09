//3 sum 
//Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0?
//Find all unique triplets in the array which gives the sum of zero.
//best approach
// Time complexity: O(n^3)

lass Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
         set<vector<int>> uniqueTriplets;
         for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    // Sort the triplet to avoid duplicates
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    uniqueTriplets.insert(triplet);
                }
            }
        }
    }
    return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());

    }
};
// Compare this snippet from 1_ARRAY/Two%20Sum%20-%20Pair%20with%20Given%20Sum.cpp:

