#include <iostream>
using namespace std;
void printDec(int a){
    if(a == 0){
        return;
    }
    cout<<a<<" ";
    printDec(a-1);
    cout<<a<<" ";
}
int main()
{
    printDec(5);
    return 0;
}
