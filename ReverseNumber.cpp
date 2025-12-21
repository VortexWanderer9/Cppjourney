#include <iostream>
using namespace std;
int main()
{
    int num;
    int reverseNumber = 0;
    cout << "Enter Number which you want to reverse: ";
    cin >> num;
    while (num)
    {
        reverseNumber = reverseNumber * 10 + num % 10;
        num /= 10;
    }
    cout << "Reversed Number: " << reverseNumber << endl;
    return 0;
}