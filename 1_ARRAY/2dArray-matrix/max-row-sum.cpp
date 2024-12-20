#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxRowSum(const vector<vector<int>>& matrix) {
    int maxSum = INT_MIN;
    int rowIndex = -1;
    
    for (int i = 0; i < matrix.size(); ++i) {
        int currentSum = 0;
        for (int j = 0; j < matrix[i].size(); ++j) {
            
            currentSum += matrix[i][j];
        }
        if (currentSum > maxSum) {
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int max = maxRowSum(matrix);
    cout << "max sum of row : " << max << endl;

    return 0;
}