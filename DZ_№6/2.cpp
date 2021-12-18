#include <iostream>
using namespace std;

void calc(int num,int base)
{

    if (num == 0)
        return;
    int rem = num /*введённое число пользователем*/ % base/*ссистема счисления*/; // rem - это остаток
    if (rem <= 9)
        {
            calc(num/base,base);
            cout << rem;
        }
    else
        {
            calc(num/base,base);
            cout << char(rem - 10 + 'A');
        }
}

int main() {

    int num;
    int base;
    cout << "Enter a number from 0 to 350" << endl;
    cin >>num;
    cout << "Enter a number systems" <<endl;
    cin >>base;
    if ((num <= 350) && (num >= 0))
    {
        calc(num,base);
        cout <<endl;
    } else
        {
            cout << "they said that you need to enter from 0 to 350" << endl;
        }
    system("pause");
    return 0;
}