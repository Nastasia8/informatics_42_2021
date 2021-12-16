#include <iostream>
#include <ctime>

using namespace std;
void F (int ost, int nom, int sis, int cel)
{   
    if (sis != 2)
    {
    ost = nom % sis; // остаток от деления = введенное число % система счисления, к которой приводим
    if (ost <= 9) // остаток от деления будет записан в буквенное значение только с "10"
        {   
        cel = nom / sis;
        cout << cel;
        cout << ost;
        }
    else 
        {   
        cel = nom / sis;
        cout << cel;
        cout << char(ost - 10 +'A');
        }
    }
    else
    {
        while (nom != 0)
        {   
            ost = nom % 2;
            nom /= 2;
            cout << ost;
        }
        
    }
    

}

int main()
{   
    int ost;
    int cel;
    int nom;
    int sis;
    cout << " white 'nom' from [0;350] -  ";
    cin >> nom;
    cout << " white 'sis' -  ";
    cin >> sis;
    if( nom>=0 && nom<=350 )
    {
        F(ost, nom, sis, cel);
        cout << " ";
    }
    else
    {
        cout << "white new value of 'nom'" << endl;
    }
    return 0;
}
