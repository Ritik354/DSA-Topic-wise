//Spiral Matrix
/* Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100 */

//optimal approach
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(),n = matrix[0].size();
        vector<int> ans;
        int rowStart = 0, rowEnd = m-1;
        int colStart = 0, colEnd = n-1;
        while(rowStart<=rowEnd && colStart<= colEnd){

            //top
            for(int i=colStart;i<=colEnd;i++){
                ans.push_back(matrix[rowStart][i]);
            }
            //right
            for(int j=rowStart+1;j<=rowEnd;j++){
                ans.push_back(matrix[j][colEnd]);
            }
            //bottom
            for(int i=colEnd-1;i>=colStart;i--){
                if(rowEnd==rowStart){
                    break;
                }
                ans.push_back(matrix[rowEnd][i]);
            }
            //left
            for(int j=rowEnd-1;j>=rowStart+1;j--){
                if(colStart==colEnd){
                    break;
                }
                ans.push_back(matrix[j][colStart]);
            }
            rowStart++; 
            colStart++;
            rowEnd--; 
            colEnd--;
        }
        return ans;
    }
};