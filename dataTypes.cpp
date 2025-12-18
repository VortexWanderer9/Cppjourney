#include <iostream>
#include <string>
using namespace std;

int exampleFunction(){
    int item = 50;
    double cost_per_item = 9.99;
    double total_cost = item * cost_per_item;
    char currency = '$';
    cout << "Number of Items: " << item << endl;
    cout << "Cost per Item :" << cost_per_item << endl;
    cout << "Total cost = " << currency << total_cost;
    return 0;
}


int main(){
    int number = 12;
    char letter = 'A';
    bool isTrue = false;
    float score = 4.5;
    string message = "Hello world !";
   // cout << "Number is :" << number << "\n"
   // << "letter is:" << letter << "\nWhy :" << isTrue << "\nmessage :" << message;
   exampleFunction();


    return 0;
}