#include <iostream>
#include <cmath>

using namespace std;



void calc(int P, int N, int D)
{   
    if (D!=0){
    int M = N*12;
    float m = M/D;
    float I = 15;
    
    int S = (P * (pow((1 +((I/100) / (m/12))), ((m/12) * N))));
    cout <<"Cумма вклада = "<<S;
    } else {
    
        cout << "Без понятия"<<endl;

    }

}



int main()
{
    int P,N,D;
    cout << "Введи P,N = ";
    cin >> P >> N;
    cout <<"Выбери одно из трех"<<endl;
    cout <<"1 - 3"<<endl;
    cout <<"2 - 6"<<endl;
    cout <<"3 - 12"<<endl;
    cin >> D;

    
    switch(D)

    {
        case 1:
            cout<<"ты выбрал 1"<<endl;
            D = 3;
            break;
        case 2:
            cout<<"Ты выбрал  2"<<endl;
            D = 6;
            break;
        case 3:
            cout<<"Ты выбрал 3"<<endl;
            D = 12;
            break;
        default:
            cout<<"такая операция не выполнима"<<endl;
            D = 0;
            break;
    }


    calc(P,N,D);
    

}