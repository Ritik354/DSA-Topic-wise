//Count pairs with given sum
//Given an array of integers, and an integer ‘K’, find the count of pairs of elements in the array whose sum is equal to ‘K’.
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countPairsWithSum(const vector<int>& arr, int k) {
    unordered_map<int, int> freqMap; // To store frequency of elements
    int count = 0;

    for (int num : arr) {
        int target = k - num; // Find the complement
        if (freqMap.find(target) != freqMap.end()) {
            count += freqMap[target]; // Add the frequency of the complement
        }
        // Update the frequency of the current number
        freqMap[num]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int k = 6;
    cout << "Number of pairs with sum " << k << ": " << countPairsWithSum(arr, k) << endl;
    return 0;
}

