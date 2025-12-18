#include <iostream>
#include <string>
using namespace std;

int getUserName()
{
    string name;
    cout << "Enter Your Name:";
    cin >> name;
    cout << "Your User name is:" << name <<"123" << endl;
    return 0;
}

int main()
{
    getUserName();
    return 0;
}
