#include <iostream>
using namespace std;
void printDec(int a){
    if(a == 6){
        return;
    }
    cout<<a<<" ";
    printDec(a+1);
    cout<<a<<" ";
}
int main()
{
    printDec(1);
    return 0;
}
