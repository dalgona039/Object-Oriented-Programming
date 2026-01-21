#include <iostream>

using namespace std;

void prompt()
{
    cout << "Please enter an integer: ";
}

int main()
{
    int value1, value2, sum;
    cout << "This program adds two integers." << endl;
    prompt();

    cin >> value1;

    prompt();

    cin >> value2;

    sum = value1 + value2;
    cout << "The sum of " << value1 << " and " << value2 << " is " << sum << "." << endl;
}