#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
        sum += matrix[i][n - i - 1];
    }

    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    cout << "Diagonal sum: " << diagonalSum(matrix) << endl;

    return 0;
}