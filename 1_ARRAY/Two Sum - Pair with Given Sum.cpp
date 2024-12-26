// best approach
//  Time complexity: O(n)
//  Space complexity: O(n)

// Approach: Use a hash map to store the index of the numbers. For each number, check if the complement (target - number) is already present in the map. If it is present, return the pair of indices. Otherwise, store the number with its index in the map.

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        int complement = target - arr[i];
        if (map.find(complement) != map.end())
        {
            return {map[complement], i}; // Found the pair
        }
        map[arr[i]] = i; // Store the current number with its index
    }
    return {}; // No pair found
}
