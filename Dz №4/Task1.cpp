#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;
    float y;
    float c = 0;                        // c это итог выбранного действия
    int operation_number;

    cout << "select the operation number from 1 to 5. Where 1 is addition, 2 is multiplication, 3 is division,4 is exponentiation, 5 is subtraction" <<endl;
    cin >> operation_number;
    cout << "enter variables x" <<endl;
    cin >> x;                            // x  это первая переменная
    cout << "enter variables y" <<endl;
    cin >> y;                            //  y это вторая переменная

    switch (operation_number)
    {
        case 1:
        c = x + y;
        cout << c <<endl;
        break;

        case 2:
        c = x * y;
        cout << c <<endl;
        break;

        case 3:
        if(y == 0)
            {
                cout << "Choose y less than or greater than zero" <<endl;
            } else
                {
                    c = x / y;
                    cout << c <<endl;
                }
        break;

        case 4:
        c = pow(x, y);
        cout << c <<endl;
        break;

        case 5:
        c = x - y;
        cout << c <<endl;
        break;

        default:
        cout << "choose exactly from the proposed" <<endl;
    }
return 0;
}