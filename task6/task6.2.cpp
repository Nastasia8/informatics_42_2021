#include <iostream>
#include <cmath>

using namespace std;

void alg(int n) //объявление функции
{
    int two = 0;
    int eight = 0;
    int sixteen = 0;
    int a = n;
    int b = n; //приравниваем переменные a и b к введеному с клавиатуры числу n
    for(int i = 0; n>0; i++)
    {
        two += (n % 2) * pow(10, i); //переводим число n из 10 сс в 2 до тех пор, пока n не будет больше 0
        n=n/2;
    }

    for(int i = 0; a>0; i++)
    {
        eight += (a % 8) * pow(10, i); //переводим число a из 10 сс в 8 до тех пор, пока a не будет больше 0
        a=a/8;
    }

    for(int i = 0; b>0; i++)
    {
        sixteen += (b % 16) * pow(10, i); //переводим число b из 10 сс в 16 до тех пор, пока b не будет больше 0
    }
    cout<<"Number System 2 = " << two << endl;
    cout<<"Number System 8 = "  << eight << endl;
    cout<<"Number System 16 = "  << sixteen << endl;
   //выводим полученный результат
}

int main()
{   
    int n;
    cin >> n;
    while(n<0 || n>325) //пока n меньше 0 или больше 325, выводим сообщение
    {
        cout << "Write correct number: ";
        cin >> n;
    } 
    
    alg(n); //обращаемся к функции

}

//Alexandr Butusov helped
