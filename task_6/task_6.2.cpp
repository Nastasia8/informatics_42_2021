#include <iostream>
#include <string>

using namespace std;

string convert_sys(int, int);

int main()
{
    int x = 0;
    int y = 0;
    cout << " Enter number:= ";
    cin >> x;
    cout << " Enter notation:= ";
    cin >> y;
    cout << convert_sys(x, y);
}

string convert_sys(int input, int notation) {
    string buffer = "";
    string ans = "";
    int buf;
    while (input != 0) {
        ans = to_string(input % notation);
        ans += buffer;
        input /= notation;
        buffer = ans;
    }
    return ans;
}