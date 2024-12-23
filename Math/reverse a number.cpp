//reverse a number 
#include <iostream>
using namespace std;

int reverse(int n){
    // Write your code here
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}

//negative number
int reverse(int n){
    // Write your code here
    int rev=0;
    bool isNegative = n<0;
    n=abs(n);
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return isNegative?-rev:rev;
}

//int32 overflow

int reverse(int n){
    // Write your code here
    int rev=0;
    while(n!=0){
        int rem=n%10;
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && rem>7)){
            return 0;
        }
        if(rev<INT_MIN/10 || (rev==INT_MIN/10 && rem<-8)){
            return 0;
        }
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}