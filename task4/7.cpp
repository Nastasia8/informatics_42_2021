#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

void parameters(int, int, char);


int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int height, width;
    char symbol;
    cout << "Введите высоту прямоугольника" << endl;
	cin >> height;
	cout << "Введите ширину прямоугольника" << endl;
	cin >> width;
	cout << "Введите символ для рисования" << endl;
	cin >> symbol;
	cout << endl;
    cout << "Получился данный прямоугольник" << endl;
    parameters(height, width, symbol);

return 0;
} 



void parameters(int height, int width, char symbol){
    for (int i = 0; i < height; i++)
    {
        if(i==0)
        {
            for(int i=0; i < width; i++)
            {
                cout<<symbol;
            }
            cout<<endl;
        }
        else if (i == height - 1)
        {
            for(int i = 0; i < width; i++)
            {
                cout<<symbol;
            }
            cout<<endl;
        }
        else if ((i !=0) && (i!= height-1))
        {
            cout<<symbol;
            for(int i = 0; i < width - 2; i++)
            {
                cout<<" ";
            }
            cout<<symbol<<endl;
        }
    }
}