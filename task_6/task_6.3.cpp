#include <iostream>
using namespace std;

int NOD(int, int);

int main() {
    int x = 0;
    int y = 0;
    cout << "Enter two arg:";
    cin >> x >> y;
    NOD(x, y);
 
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
    cout << x << " is NOD";
    return 0;
}