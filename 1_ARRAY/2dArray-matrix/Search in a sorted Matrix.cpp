//search in a sorted matrix
//https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1#
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchX(vector<vector<int>> &mat, int x,int row){
        int n=mat[0].size();
        int colSt=0,colEnd=n-1;
        while(colSt<=colEnd){
            int mid=(colSt+colEnd)/2;
            if(mat[row][mid]==x){
                return true;
            }else if(mat[row][mid]>x){
                colEnd = mid-1;
            }else{
                colSt = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int m=mat.size(),n=mat[0].size();
        int rowSt=0,rowEnd=m-1;
        int colSt=0,colEnd=n-1;
        while(rowSt<=rowEnd){
            int mid= (rowSt+rowEnd)/2;
            if(mat[mid][colSt]<=x&&mat[mid][colEnd]>=x){
                return searchX(mat,  x, mid);
            }else if(mat[mid][colSt]>x){
                rowEnd =mid-1;
            }else{
                rowSt = mid+1;
            }
        }
        return false;
    }
};