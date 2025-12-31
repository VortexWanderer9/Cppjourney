#include <iostream>
#include <string>
using namespace std;
struct Person
{
    string name;
    int age;
} student;

struct language
{
    string programming;
    int experience;
    char isAvailable;
    int age;
};
void make()
{
    language programmer1;
    cout << "Enter Programming language that you use: ";
    getline(cin, programmer1.programming);
    cout << "Enter Your Experience in year: ";
    cin >> programmer1.experience;
    cout << "Are You Available ? (Y or N): ";
    cin >> programmer1.isAvailable;
    cout << "What is your age : ";
    cin >> programmer1.age;
    string work = (programmer1.isAvailable == 'Y') ? "You are available for work" : "You are not available for work";
    cout << "------------You have just entered------------" << endl;
    cout << " \nYour Name is" << programmer1.programming << "\n"
         << "\nYou Have" << programmer1.experience << "yeas of experience" << "\n"
         << "\n"
         << work << "\nYou are" << programmer1.age << "Years Old";
}
int main()
{
    // cout << "Enter Your Name: ";
    // getline(cin, student.name);
    // cout << "Enter Your Age: ";
    // cin >> student.age;
    // cout << "Your Name is " << student.name << " Your are " << student.age;
    make();
    return 0;
}
