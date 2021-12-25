#include <iostream> //Ввод и вывод данных
//Задание взял у Александра Бутусова 1/42
using namespace std; //Использование всего, что находится в пространстве
void draw(int hight, char sym, int index1, int index2, char space) //Указатель функции Рисование
{
    while (index1 <= hight) //Пока (индекс1 <= высота)
    {
        cout << string(index1, sym) << endl; //Вывод (строка индекс1, символы)
        index1++; //Сложение индекс1
    }
    cout << endl; //Конец
    while (index2 > 0) //Пока (индекс2 > 0)
    {
        cout << string(index2, sym) << endl; //Вывод (строка индекс2, символы)
        index2--; //Вычитание индекс2
    }
    for(int i = 0; i <= hight; i++) //Цикл с точным кол-вом действий
    {
        cout<< string(hight-i, space);  //Вывод (строка высота - i, космос)
        cout<< string(i, sym) << endl;  //Вывод (i, символы)
    }
    cout << endl; //Конец
    for(int i = hight; i > 0; i--) //Цикл с точным кол-вом действий
    {
        cout<< string(hight-i, space);  //Вывод (строка высота - i, космос)
        cout<< string(i, sym) << endl;  //Вывод (i, символы)
    }
}
int main() //Существует функция с именем main и функция возвращает целое число типа int
{
    int hight, index1, index2; //Целые (Высота, индекс 1, индекс2)
    char sym; //Символьный (Символ)
    char space = ' '; //Символьный (Космос =)
    cout << "Enter height of triangle = "; //Вывод (Введите высоту треугольника)
    cin >> hight; //Ввод высоты
    cout << "Enter sym of triangle = "; //Вывод (Введите символ треугольника)
    cin >> sym; //Ввод символов
    index1=0; //Индекс1 = 0
    index2=hight; //Индекс2 = высота
    draw(hight, sym, index1, index2, space); //Нарисовать
}