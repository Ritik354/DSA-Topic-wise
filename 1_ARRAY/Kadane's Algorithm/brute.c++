/* time complexity n^3 */
/* #include <iostream>
using namespace std;
int main()
{
    int n=5; 
    int arr[5] = {1,2,3,4,5};
    int sum=0;
    for(int str=0;str<n;str++)
    {
        for(int end=str;end<n;end++)
        {
            int currsum=0;
            for(int i=str;i<=end;i++)
            {
                currsum=currsum+arr[i];
                sum = max(currsum,sum);
            }
            
        }
        
    }
    cout<<sum;
    return 0;
}
 */
/* time complexity n^2 */
#include <iostream>
using namespace std;
int main()
{
    int n=5; 
    int arr[5] = {1,2,3,4,5};
    int sum=0;
    for(int str=0;str<n;str++)
    {
        int currsum=0;
        for(int end=str;end<n;end++)
        {
            currsum = currsum + arr[end];
            
        }
        sum = max(sum,currsum);
    }
    cout<<sum;
    return 0;
}
