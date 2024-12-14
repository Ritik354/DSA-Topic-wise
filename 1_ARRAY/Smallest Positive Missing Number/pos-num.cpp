#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()
{
    int arr[5] = {-3, 4, -5, 1, 2};
    int n = 5, count = 0, num = 1;
    
    for (int i = 0; i < n; i++)
    {
        
            if (arr[i] == num)
            {
                num++;
                continue;
            }
            cout << num;
        
    }
}