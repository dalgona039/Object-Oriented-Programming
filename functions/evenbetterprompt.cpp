#include <iostream>

using namespace std;

int prompt(int n)
{
    int result;
    cout << "Please enter an integer: ";
    cin >> result;
    return result;
}

int main()
{
    int value1, value2, sum;
    cout << "This program adds two integers." << endl;
    
    value1 = prompt(1);
    value2 = prompt(2);

    sum = value1 + value2;
    cout << "The sum of " << value1 << " and " << value2 << " is " << sum << "." << endl;
}