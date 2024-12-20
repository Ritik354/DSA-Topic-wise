#include <bits/stdc++.h>
using namespace std;
pair<int, int> findElement(int a[][3], int n, int m, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (a[i][j] == x)
                return {i, j};
    }
    return {-1, -1};
}
int main()
{
    int n = 4, m = 3;

    int a[4][3];
    // Input
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    pair<int, int> p = findElement(a, n, m, key);
    cout << p.first << " " << p.second << endl;
    return 0;
}