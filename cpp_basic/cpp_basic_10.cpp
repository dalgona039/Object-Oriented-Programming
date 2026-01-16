#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> fruits = {"Apple", "Banana", "Cherry"};
    
    for (const auto& fruit : fruits) {
        cout << fruit << endl;
    }

    return 0;
}