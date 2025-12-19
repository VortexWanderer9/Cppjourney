#include <iostream>
using namespace std;

int checkTheAge (){
    int age;
    cout << "Enter Your age:";
    cin >> age;
    if(age < 18){
        cout << "Your Age is too Low";
    }
    else if(age > 65){
        cout << "Your age is to High !";
    } else {
        cout << "Your are not Human~";
    }

    return 0;
}
int main(){
    bool isCodingFun = true;
    bool isSundayScary = false;
    cout << boolalpha;
    cout << isCodingFun << endl;
    cout << noboolalpha;
    cout << isSundayScary;
    checkTheAge();
    return 0;
}