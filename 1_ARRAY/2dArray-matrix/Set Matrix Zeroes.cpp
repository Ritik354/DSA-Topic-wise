//set matrix zero

//https://practice.geeksforgeeks.org/problems/set-matrix-zeroes2152/1

//brute force
//O(n*m*(n+m)) time and O(1) space
void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (matrix[k][j] != 0)
                    {
                        matrix[k][j] = -1;
                    }
                }
                for (int k = 0; k < m; k++)
                {
                    if (matrix[i][k] != 0)
                    {
                        matrix[i][k] = -1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

//better approach

//O(n*m) time and O(n+m) space

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (row[i] == 1)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (col[i] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }
}

//optimal approach
//O(n*m) time and O(1) space

void setZeroes(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    bool isCol = false;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][0] == 0)
        {
            isCol = true;
        }
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == 0)
            {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (mat[i][0] == 0 || mat[0][j] == 0)
            {
                mat[i][j] = 0;
            }
        }
    }
    if (mat[0][0] == 0)
    {
        for (int i = 0; i < m; i++)
        {
            mat[0][i] = 0;
        }
    }
    if (isCol)
    {
        for (int i = 0; i < n; i++)
        {
            mat[i][0] = 0;
        }
    }
}