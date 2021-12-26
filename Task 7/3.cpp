#include <iostream>
using namespace std;
void func(int num)
{
    int i = 0;
    while (num != 1) {
        i++;
        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num = (num * 3 + 1) / 2;
        }
        cout << i << ". " << num << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int num;
    cout << "Введите число: ";
    cin >> num;
    func(num);
}
