#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> language = {};
    string name;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter your favorite programming language: ";
        getline(cin, name);
        language.push_back(name);
    }

    cout << "Your favorite programming languages are:" << endl;
    for (string languages : language)
    {
        cout << languages << endl;
    }
    cout << "Total languages entered: " << language.size() << endl;

    return 0;
} 