/* Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. 

Examples:

Input: mat[][] = [[1, 2, 3],
                [4, 5, 6]
                [7, 8, 9]]
Output: Rotated Matrix:
[3, 6, 9]
[2, 5, 8]
[1, 4, 7]
Input: mat[][] = [[1, 2],
                [3, 4]]
Output: Rotated Matrix:
[2, 4]
[1, 3] */
//Anti colockwise rotation 
//using extra array
//Approach: The idea is to use an extra array of the same size as the input matrix to store the result of the rotation.
//The idea is to copy the elements of the matrix to the extra array in a way that the ith row of the matrix is copied to the ith column of the extra array in reverse order.
//Below is the implementation of the above approach:
void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	
	int m=mat.size(),n=mat[0].size();
	int ans[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ans[j][n-1-i] = mat[i][j];
		}
		
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			mat[i][j] = ans[i][j];
		}
		
	}
}
//Approach: The idea is to use the transpose of the matrix and then reverse the columns of the matrix.
//Transpose of a matrix is obtained by changing rows to columns and columns to rows.
//To rotate the matrix by 90 degrees, we first take the transpose of the matrix, then reverse the columns of the transposed matrix.
//Below is the implementation of the above approach:
// C++ program to rotate a matrix by 90 degrees
// without using any extra space
#include <bits/stdc++.h>
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        //transpose
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        //reverse column
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(mat[j][i],mat[n-1-j][i]);
            }
        }
        
    }
};
//Time Complexity: O(N^2)
//Auxiliary Space: O(1)

