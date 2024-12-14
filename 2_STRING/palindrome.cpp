#include <iostream>
#include <vector>
using namespace std;

int check_palin(string &str)
{
    int left=0,right = str.size()-1;
    while(left<right)
    {
        if(str[left]!=str[right])
        {
            return false;

        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string s={"A man, a plan, a canal: Panama"};
    
    int result = check_palin(s);
    if(result==0)
    {
        cout<<"not a palindrome";
    }else
    {
        cout<<"palindrome";
    }
    return 0;
}