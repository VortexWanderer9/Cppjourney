#include <iostream>
using namespace std;
struct Person
{
    string name;
    int age;
} student;

int main()
{
    cout << "Enter Your Name: ";
    getline(cin, student.name);
    cout << "Enter Your Age: ";
    cin >> student.age;
    cout << "Your Name is " << student.name << " Your are " << student.age;
    return 0;
}