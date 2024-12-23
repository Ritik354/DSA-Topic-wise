//count digits in a number
#include <iostream>
using namespace std;

int countDigits(int n){
    // Write your code here
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
