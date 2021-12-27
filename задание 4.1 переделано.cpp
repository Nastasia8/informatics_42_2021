#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

float prod(int a, int b);
float divis(int a, int b);

int main()
{
        SetConsoleOutputCP(CP_UTF8);
                int a, b, num;
        cout « "enter first number" « endl;
                cin » a;
        cout « "enter second number" « endl;
                cin » b;
        cout « "enter operation number" « endl;
                cin » num;
        switch (num) {
case 1:
    cout « prod(a, b) « endl;
    break;
case 2:
    cout « divis(a, b) « endl;
    break;
default:
    cout « "1 -multiplication, 2 - division" « endl;
break;
}

return 0;

}

float prod(int a, int b)
{
return a * b;
}
float divis(int a, int b)
{
return a / b;
}