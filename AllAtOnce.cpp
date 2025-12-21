#include <iostream>
#include <string>
using namespace std;
int doorCode(){
    int code = 12345;
    int entry;
    cout << "Enter Your Door code:";
    cin >> entry;
    string isAccess = (entry == code) ? "Access Granted" : "Access denied";
    cout << isAccess << endl;
    return 0;
}

int main()
{
    string name;
    cout << "Enter Your name:";
    getline(cin, name);
    //    if(name.empty()){
    //     cout << "No name entered";
    //    } else {
    //     cout << "Hello, " << name << "!";
    //    }
    string has = (name.empty()) ? "No name entered" : "Hello, " + name + "!";
    cout << has << endl;
    doorCode();
    return 0;
}