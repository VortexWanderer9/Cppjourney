#include <iostream>
using namespace std;
int main(){
    int level;
    cout << "Enter Your security Level:";
    cin >> level;
    if(level > 0 && level <= 3){
        cout << "Access granted";
    } else {
         cout << "Access denied";
    }
    return 0;

}