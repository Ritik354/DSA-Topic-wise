//74. Search a 2D Matrix
/* You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false */
//Brute Force Approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n = matrix[0].size();
        int i=0,row=-1;
        for(i=0;i<m;i++){
            if(matrix[i][0]>target)
                break;
            row = i;
        }
        if(row==-1){
            return false;
        }
        for(i =0;i<n;i++){
            if((matrix[row][i])==target){
                return true;
            }
        }
        return false;
    }
};

//Optimal Approach using binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m-1,row=-1;
        while(startRow<=endRow){
            int mid = startRow + (endRow - startRow)/2;
            if(matrix[mid][0]<= target && matrix[mid][n-1]>= target){
                row = mid;
                break;
            }else if(matrix[mid][0]< target ){
                startRow = mid+1;
            }else{endRow = mid-1;
            } 
        }
        if(row==-1) return false;
        int startCol=0,endCol = n-1;
        while(startCol<=endCol){
            int mid = startCol +(endCol-startCol)/2;
            if(matrix[row][mid]== target){
                return true;
            }else if(matrix[row][mid]>target){
                endCol = mid-1;
            }else{
                startCol = mid+1;
            } 
        }
        return false;
    }
};