#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int d=3;
    
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end()-d);
    reverse(arr.end()-d,arr.end());
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}