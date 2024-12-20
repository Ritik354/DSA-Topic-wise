/* Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom. */

//Optimal Approach 
class Solution {
public:
    //find target in row
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size(),n = matrix[0].size();
        int row =0,col =n-1;
        //check target lie in which col
        while(row < m && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                col--;
            }else{
                row++;
            }
        }
        return false;
    }
};
