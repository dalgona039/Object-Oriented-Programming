#include <iostream>
#include <iomanip>

using namespace std;    

int main ()
{
    int size ;
    cout << "Enter size of multiplication table: ";
    std::cin >> size;
    int row = 1;
    while (row <= size)
    {
        int col = 1;
        while (col <= size)
        {
            int product = row * col;
            cout << setw(4) << product;
            col++;
        }
        cout << endl;
        row++;
    }

}