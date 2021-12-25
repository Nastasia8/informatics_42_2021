#include <iostream>
using namespace std;

int pow(int x, int y)
{
    int n = 1;
    while (y--)
        n *= x;
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int dec;//Число в десятичной СС
    int bin = 0;//Искомое число в двоичной CC
    int oct = 0;//Искомое число в восьмиричной СС
    int i = 0;//Разряд двоичного числа
    cout << "Введите число" << endl;
    cin >> dec;
    int x1 = dec;
    while (x1 > 1)
    {
        bin += (x1 % 2) * pow(10, i);//Присваиваем i-тому разряду остаток от деления
        x1 /= 2;
        i++;
    }
    bin += x1 * pow(10, i);
    cout << "Число в двоичной СС:" << endl << bin << endl;
    int x2 = dec;
    while (x2 > 7)
    {
        oct += (x2 % 8) * pow(10, i);//Присваиваем i-тому разряду остаток от деления
        x2 /= 8;
        i++;
    }
    oct += x2 * pow(10, i);
    cout << "Число в восьмиричной СС:" << endl << oct << endl;
    int x3 = dec;

    {
        int c[50];
        int chislo, i = 0;
        div_t n;

         chislo=x3;

        n = div(chislo, 16);
        c[i] = n.rem;
        while (n.quot != 0)
        {
            i++;
            n = div(n.quot, 16);
            c[i] = n.rem;
        }

        cout << "Число в шестнадцатеричной СС: = ";
        for (i; i >= 0; i--)
        {
            if (c[i] < 10)
                cout << c[i];
            if (c[i] == 10)
                cout << "A";
            if (c[i] == 11)
                cout << "B";
            if (c[i] == 12)
                cout << "C";
            if (c[i] == 13)
                cout << "D";
            if (c[i] == 14)
                cout << "E";
            if (c[i] == 15)
                cout << "F";
        }
     
    }
    system("pause>NULL");
    return 0;
}