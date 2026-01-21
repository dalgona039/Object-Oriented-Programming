#include <iostream>

using namespace std;

void increment (int x) 
{
    cout << "Inside increment function, before incrementing: " << x << '\n';
    x++ ;
    cout << "Inside increment function, after incrementing: " << x << '\n';
}

int main()
{
    int x = 5;
    cout << "Before calling increment function: " << x << '\n';
    increment(x);
    cout << "After calling increment function: " << x << '\n';
}