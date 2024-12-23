//palindrome number
#include <iostream>
using namespace std;

bool checkPalindrome(int n){
    // Write your code here
    int temp=n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
        return true;
    }
    return false;
}