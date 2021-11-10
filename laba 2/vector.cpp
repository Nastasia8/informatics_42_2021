#include <iostream>
#include <cmath>
 using namespace std;
  int main()
  { 
      int x1=1;
      int y1=5;
      int z1=3;

      int x2;
      int y2;
      int z2;


      float D=0;
      float b;
      float a;
      float e=0;
      float cosine=0;
      float sine=0;
      float Sc=0;
      float Vc=0;
      
      cout << "white x2, y2, z2" << endl;

           cin >> x2;
           cin >> y2;
           cin >> z2;

      D=sqrt(pow(x1,2) + pow(y1,2) + pow(z1,2));   // длина вектора (1)
           cout << "D = " << D << endl;

      e=x1,y1,z1/sqrt(pow(x1,2) + pow(y1,2) + pow(z1,2));    // единичный вектор (2)
           cout << "e = " << e << endl; 

      a=sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));
      b=sqrt(pow(x2,2)+pow(y2,2)+pow(z2,2)); 
           cout << "a = " << a << endl; 
           cout << "b = " << b << endl; 

      Sc=x1*x2+y1*y2+z1*z2;
           cout << "Sc = " << Sc << endl;    // скалярное произведение (3)

      cosine=Sc/(a*b);

      sine=sqrt(1-pow(cosine,2));

      Vc=a*b*sine;
           cout << "Vc = " << Vc << endl;    // векторное произведение (4)
           
    return 0;
  }