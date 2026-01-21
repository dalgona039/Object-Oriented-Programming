#include <iostream>

using namespace std;

int factorial (int n) 
{
    if (n <= 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main ()
{
    cout << "0! = " << factorial(0) << '\n';
    cout << "1! = " << factorial(1) << '\n';
    cout << "2! = " << factorial(2) << '\n';
    cout << "3! = " << factorial(3) << '\n';
    cout << "4! = " << factorial(4) << '\n';
    cout << "5! = " << factorial(5) << '\n';
    return 0;
}