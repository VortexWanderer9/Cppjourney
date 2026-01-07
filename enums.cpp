#include <iostream>
using namespace std;
enum Level {
    LOW= 23,
    Medium = 23,
    High =45
};
int main(){
    enum Level myLevel = High;
    cout << myLevel;
    return 0;
}