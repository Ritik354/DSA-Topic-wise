#include <iostream>
using namespace std;
void solution(string &a)
{
   a.erase(2,2);
   cout<<a;

} 
int main()
{
    string a={"ritik"};
  

    solution(a);
    return 0;
}