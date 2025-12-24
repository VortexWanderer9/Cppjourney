#include <iostream>
#include <string>
using namespace std;

int main()
{
    char mes = 'y';
    do
    {
        if (mes == 'y')
        {
            int num;
            cout << "Enter a number to see its multiplication table: ";
            cin >> num;
            for (int i = 1; i <= 10; ++i)
            {
                cout << num << " x " << i << " = " << num * i << endl;
            }
        }

        cout << "Do you want to see a multiplication table? (y/n): ";
        cin >> mes;

    } while (mes == 'y');

    return 0;
}