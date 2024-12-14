/* time complexity O(n) */
/* KADANE's ALGO */
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int arr[4] = {1,-2,3,-2};
    int minSUM=arr[0],maxSUM=arr[0];
    int currSUM=arr[0];
    int arr_sum=0;
    /* IF SIGNLE INPUT */
    if(n<2)
    {
        return arr[0];
    }
    /* MINIMUM SUM && MAX SUM */
    for(int str=1;str<n;str++)                                                                                                       
    {   
        currSUM = min(currSUM+arr[str],arr[str]);
        minSUM = min(minSUM,currSUM);
        currSUM = max(currSUM+arr[str],arr[str]);
        maxSUM = max(maxSUM,currSUM);
    }
    /* MAX SUM OF ARRAY */
    for(int str=1;str<n;str++)                  
    {   
    
    
    }
     /* SUM OF ARRAY  */
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
    }
    /* max sum = total sum - minimum sum */
    maxSUM = arr_sum - minSUM;
    cout<<arr_sum-minSUM;
    return 0;
}
