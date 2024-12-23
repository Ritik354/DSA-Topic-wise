//check armstrong number
#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n){
    // Write your code here
    int temp=n;
    int sum=0;
    int digits = log10(n)+1;
    while(n>0){
        int rem=n%10;
        sum+=pow(rem,digits);
        n=n/10;
    }
    if(sum==temp){
        return true;
    }
    return false;
}