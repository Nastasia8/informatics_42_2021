#include <iostream>

using namespace std;

int NOD(int, int);
int NOK(int, int);

int main()
{
    int x = 0;
    int y = 0;
    cout << "Enter two arg:";
    cin >> x >> y;
    cout << NOK(x, y) << " is NOK";
}

int NOD(int x, int y)
{
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}

int NOK(int x, int y)
{
    return (x * y) / NOD(x, y);
}