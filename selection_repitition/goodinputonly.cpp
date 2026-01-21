#include <iostream>

using namespace std;

int main ()
{
    int in_value = -1;
    cout << "Enter a positive integer: ";
    while (in_value < 0 || in_value > 10)
        cin >> in_value;
    
    cout << "You entered: " << in_value << endl;
   
}