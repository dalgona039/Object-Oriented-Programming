#include <iostream>

using namespace std;

int main ()
{
    int input = 0;
    int sum = 0;

    cout << "This program adds nonnegative integers." << endl;
    cout << "Enter a negative integer to end the program." << endl;
    cin >> input;
    while (input >= 0)
    {
        sum += input;
        cout << "Enter a nonnegative integer (or a negative integer to quit): ";
        cin >> input;
    }
    cout << "The sum is: " << sum << endl;
}