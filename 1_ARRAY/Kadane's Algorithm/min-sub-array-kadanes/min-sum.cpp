/* time complexity O(n) */
/* KADANE's ALGO */
#include <iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[7] = {8, -8, 9, -9, 10, -11, 12};
    int minSUM=0,sum=0;
    int currSUM=arr[0];
    int arr_sum=0,temp=0;
    /* IF SIGNLE INPUT */
    if(n<2)
    {
        return arr[0];
    }
    /* MINIMUM SUM */
    for(int str=1;str<n;str++)                                                                                                       
    {   
        currSUM = min(currSUM+arr[str],arr[str]);
        minSUM = min(minSUM,currSUM);
    
    }
     /* SUM OF ARRAY  */
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
    }
    cout<<arr_sum-minSUM;
    return 0;
}
