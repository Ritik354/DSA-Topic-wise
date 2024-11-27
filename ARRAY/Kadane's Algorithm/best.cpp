/* time complexity O(n) */
/* KADANE's ALGO */
#include <iostream>
using namespace std;
int main()
{
    int n=2;
    int arr[2] = {-2, -4};
    int maxSUM=arr[0];
    int currSUM=arr[0];
    for(int str=1;str<n;str++)                                                                                                       
    {   
        currSUM = max(currSUM+arr[str],arr[str]);
        maxSUM = max(maxSUM,currSUM);
    
    }
    
    cout<<maxSUM;
    return 0;
}
