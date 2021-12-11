#include <iostream>
#include <cmath>
using namespace std;

float prod(int a, int b);
float DELENIE(int a, int b);

int main()
{ 
  int a, b, num;
  cout<< "Напишите первое число"<<endl;
  cin>>a;
  cout << "Напишите второе число"<<endl;
  cin>>b;
  cout<< "Введите номер операции"<<endl;
  cin>>num;
  switch(num)
  {
      case 1:
      cout << prod(a,b)<<endl;
      break;
      case 2:
      cout<<DELENIE(a,b)<<endl;
      break;
      default:
      cout<<"Число 1 - произведение, число 2 - деление"<<endl;
      break;
  }
  return 0;
}
float prod (int a,int b)
{
    return a*b;
}
float DELENIE(int a,int b)
{
    return float(a)/b;
}