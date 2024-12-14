#include <iostream>
#include <vector>
using namespace std;
class solution{
public:
    void sort012(vector<int>& arr) {
        // code here
        int i=0,n=arr.size(),zeros=0,ones=0,twos=0;
        while(i<n)
        {
            if(arr[i]==0){
                zeros++;
            }else if(arr[i]==1){
                ones++;
            }else{
                twos++;
            }
        }
        i=0;
        while(zeros!=0)
        {
            arr[i++]=0;
            zeros--;
        }
        while(ones!=1)
        {
            arr[i++]=1;
            ones--;
        }
         while(twos!=2)
        { 
            arr[i++]=2;
            twos--;
        }
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
};
int main()
{
    vector<int> arr = {0 ,1 ,2 ,0 ,1 ,2};
    solution obj;
    obj.sort012(arr);
    
    return 0;
}
