#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5] = {3,1,3,2,6};
    int maxSUM=0;
    int sum=0;
    int currSUM=arr[0];
    int temp=0;
    /* KADANE'S ALGORITHM TO GET MAX SUB ARRAY */
    for(int j=0;j<n;j++)
    {

        for(int str=1;str<n;str++)                                                                                                       
        {   
        currSUM = max(currSUM+arr[str],arr[str]);
        sum = max(sum,currSUM);
    
        }
        maxSUM = max(maxSUM,sum);
        sum=0;
        /* check array rotation */
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /* ARRAY ROTATION */
    temp = arr[0];
    for(int i=1;i<n;i++)
    {
        
        arr[i-1]=arr[i];
        
    }
    arr[n-1] = temp;
    temp=0;
    /* CURRENT SUM TO ZERO */
    currSUM =0;
    
    }
    
    
    cout<<maxSUM;
    return 0;
}
/* int n=arr.size();
        int temp=0,maxSUM=INT8_MIN,sum=INT8_MIN,currSUM=arr[0];
        if(n<2)
        {
            return arr[0];
        }
         /* KADANE'S ALGORITHM TO GET MAX SUB ARRAY 
        for(int j=0;j<n;j++)
        {
            
        for(int str=1;str<n;str++)                  
        {   
        currSUM = max(currSUM+arr[str],arr[str]);
        sum = max(sum,currSUM);
    
        }
        maxSUM = max(maxSUM,sum);
        sum=0;
        if(maxSUM<0)
        {
            break;
        }
        /* ARRAY ROTATION 
        temp = arr[0];
        for(int i=1;i<n;i++)
        {
        
        arr[i-1]=arr[i];
        
        }
        arr[n-1] = temp;
        temp=0;
        /* CURRENT SUM TO ZERO 
        currSUM =0;
        }
        return maxSUM;
         */