#include <iostream>

using namespace std;

int main()
{
    int value;
    cout << "Please enter an integer between 0 and 10: ";
    cin >> value;
    if (value >= 0 && value <= 10)
    {
        cout << "You entered a valid number: " << value << endl;
    }
    else
    {
        cout << "Error: The number " << value << " is out of range." << endl;
    }
}