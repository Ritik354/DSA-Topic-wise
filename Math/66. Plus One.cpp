/* You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0]. */


/* Steps to Solve
Start from the last digit (rightmost position).
Add 1 to the digit and check if it results in a carry:
If no carry, update the digit and return the array.
If there is a carry (digit becomes 10), set the current digit to 0 and move to the next left digit.
Repeat the process for all digits in the array.
If you still have a carry after processing all digits (e.g., [9, 9] becomes [0, 0]), add a new digit 1 at the beginning of the array.
Pseudocode
Here's a simple way to approach this:

Traverse the array from the rightmost digit.
Add 1 to the current digit.
Handle carry over:
If digit == 10, set it to 0 and continue to the next digit.
If you exit the loop with a carry, prepend 1 to the array.
Complexity Analysis
Time Complexity: 
𝑂
(
𝑛
)
O(n), where 
𝑛
n is the number of digits. You may need to process all digits in the worst case.
Space Complexity: 
𝑂
(
1
)
O(1) if we modify the array in place, or 
𝑂
(
𝑛
)
O(n) if a new array is created to handle carry propagation. */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i =n;i>=0;--i)
        {
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};