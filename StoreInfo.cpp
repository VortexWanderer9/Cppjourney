#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age; 
    int grade;
    cout << "Type Your name:";
    getline(cin, name);
    cout << "Enter Your Age:";
    cin >> age;
    cout << "Enter Your Grade :";
    cin >> grade;
    cout << "Your Name is : " << name << "\n" << "Your Age: " << age << "\n" << "You are at: " << grade<< " grade";
    return 0;
}

