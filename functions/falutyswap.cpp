#include <iostream>

using namespace std;

void swap (int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << '\n';
}

int main () 
{
    int var1 = 10, var2 = 20;
    cout << "Before calling swap function: var1 = " << var1 << ", var2 = " << var2 << '\n';
    swap(var1, var2);
    cout << "After calling swap function: var1 = " << var1 << ", var2 = " << var2 << '\n';
    return 0;
}