// Search in a row-wise sorted matrix

/* Given a row-wise sorted 2D matrix mat[][] of size n x m and an integer x, find whether element x is present in the matrix.
Note: In a row-wise sorted matrix, each row is sorted in itself, i.e. for any i, j within bounds, mat[i][j] <= mat[i][j+1]. */
//gfg day 39
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>> &mat, int x,int key){
            int m= mat[0].size();
            int colSt = 0,colEnd = m-1;
            while(colSt<=colEnd){
                int mid = (colSt+colEnd)/2;
                if(mat[key][mid]==x){
                    return true;
                }else if(mat[key][mid]>x){
                    colEnd = mid-1;
                }else{
                    colSt = mid+1;
                }
            }
            return false;
        }
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(),m=mat[0].size();
        int rowSt = 0,rowEnd = n-1;
        bool result= 0;
        while(rowSt<=rowEnd){
            result = search(mat,x,rowSt);
            if(result==true) return true;
            rowSt++;
        }
        return result;
    }
};
// Time Complexity: O(nlogm)