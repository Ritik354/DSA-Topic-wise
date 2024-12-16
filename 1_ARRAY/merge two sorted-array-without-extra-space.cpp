#include <vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
    // Write your code here.
    int n = a.size(), m = b.size();
    int left = n - 1, right = 0;
    while (left >= 0 && right < m)
    {
        if (a[left] > b[right])
        {
            swap(a[left--], b[right++]);
        }
        else
        {
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}
/* Merge Sorted Arrays Without Extra Space */