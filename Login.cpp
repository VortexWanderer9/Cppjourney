#include <iostream>
using namespace std;
int main() {
    cout << "Welcome to the Login Page!" << endl;
    cout << "Please enter your username: ";
    string username;
    cin >> username;

    cout << "Please enter your password: ";
    string password;
    cin >> password;

    // Here you would typically check the username and password against a database
    // For this example, we'll just print a success message
    cout << "Login successful! Welcome, " << username << "!" << endl;

    return 0;
}