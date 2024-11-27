#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nums[9] = {9,6,4,2,3,5,7,0,1};
    int n=9, i=0;
    
        while(i<n)
        {
            if(nums[i]<n&&nums[i]!=nums[nums[i]])
            {
               swap(nums[i],nums[nums[i]]);
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
        
        for(int i=0;i<n;i++)
        {

            if(i!=nums[i])
            {
                cout<<i<<endl;
            }
        } 
        
        
    return 0;
}
