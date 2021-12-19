#include <iostream>

using namespace std;

void draw(int hight, char sym1, char sym2, char sym3, char sym4, int h1, int h2, char probel)
{
    // рисует треугольник с сиволом  - @
    while (h1 <= hight)
    {   
        cout << string(h1, sym1) << endl;
        h1++;
    }
    cout << endl;

    // рисует треугольник с сиволом  - #
    while (h2 > 0) 
    {   
        cout << string(h2, sym2) << endl;
        h2--;
    }

    // рисует треугольник с сиволом  - $
    for (int i = 0; i <= hight; i++) 
    {
        cout<< string(hight-i, probel);
        cout<< string(i, sym3) << endl;
    }
    cout << endl;

    // рисует треугольник с сиволом  - %
    for (int i = hight; i > 0; i--) 
    {
        cout<< string(hight-i, probel);
        cout<< string(i, sym4) << endl;
    }

}

int main() 
{
    int hight; // высота треугольника
    int h1=0;
    int h2;

    char sym1='@';
    char sym2='#';
    char sym3='$';
    char sym4='%';

    char probel = ' ';

    cout << "White 'height' = ";
    cin >> hight;

    h2=hight;

    draw(hight, sym1, sym2, sym3, sym4, h1, h2, probel);

    return 0;
}