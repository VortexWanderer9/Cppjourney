#include <iostream>
#include <string>
using namespace std;
int fullname(){
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    fullName[fullName.length() - 1] = 'F';
    cout << fullName[fullName.length() - 1] << endl;
    return 0;
}

int main() {
    string name = "Hello World";
    int num = 12234;
    cout << name[0] << endl;
    fullname();
    return 0;
}

