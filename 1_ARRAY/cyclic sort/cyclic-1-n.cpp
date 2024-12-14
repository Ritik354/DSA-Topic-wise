#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nums[5] = {1,3,4,2,2};
    int n=5, i=0;
    
        while(i<n)
        {
            if(nums[i]>=0&&nums[i]<n&&nums[i]!=nums[nums[i]-1])
            {
               swap(nums[i],nums[nums[i]-1]);
            }else
            {
                i++;
            }
            for(int i=0;i<n;i++)
            {
            cout<<nums[i]<<" ";
            }
            cout<<endl;
        }

        for(i=0;i<n;i++)
        {
            if(i+1!=nums[i])
            {
                cout<<nums[i]<<" ";
            }
        }
        
        
    return 0;
}
