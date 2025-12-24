#include <iostream>
#include <string>
using namespace std;
int main()
{
    int myNumber[5] = {10, 20, 30, 40, 50};
    string name = "John Doe";
    for(char c: name){
        cout << c << endl;
    }
    for(int num: myNumber){
        cout << num << endl;
    }
    return 0;
}