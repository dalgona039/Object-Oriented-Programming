#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    double Result = pow(num1, num2) ;

    cout << "Result: " << Result << endl;
    return 0;
}