#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = x;
    int& r = x;

    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "r: " << r << '\n';

    x = 8;
    cout << "After changing x to 8:" << '\n';
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "r: " << r << '\n';

    y = 24;
    cout << "After changing y to 24:" << '\n';
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "r: " << r << '\n';

    r = 23;
    cout << "After changing r to 23:" << '\n';
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
    cout << "r: " << r << '\n';
    return 0;
}