#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    if (divisor != 0)
    {
        cout << "Result: " << dividend / divisor << endl;
    }
    else
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}