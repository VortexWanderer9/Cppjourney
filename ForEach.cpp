#include <iostream>
#include <string>
using namespace std;
int main()
{
    int myNumber[6] = {10, 20, 30, 40, 50, 19};
    string name = "John Doe";
    for (char c : name)
    {
        cout << c << endl;
    }
    for (int num : myNumber)
    {
        cout << num << endl;
    }
    cout << sizeof(myNumber) / sizeof(myNumber[0]) << endl;
    return 0;
}