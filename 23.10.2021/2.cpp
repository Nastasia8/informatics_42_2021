#include <iostream>
#include <cmath>

using namespace std;



void calc(int P, int n, int vibor)
{   
    if (vibor!=0){
    int month = n*12;
    float m = month/vibor;
    float I = 15;
    
    int S = (P * (pow((1 +((I/100) / (m/12))), ((m/12) * n))));
    cout <<"Summa vklada = "<<S;
    } else {
    
        cout << "x3"<<endl;

    }

}



int main()
{
    int P,n,vibor;
    cout << "Enter P,n = ";
    cin >> P >> n;
    cout <<"Choose one of three values"<<endl;
    cout <<"1 - 3"<<endl;
    cout <<"2 - 6"<<endl;
    cout <<"3 - 12"<<endl;
    cin >> vibor;

    switch(vibor)
    {
        case 1:
            cout<<"You selected 1"<<endl;
            vibor = 3;
            break;
        case 2:
            cout<<"You selected 2"<<endl;
            vibor = 6;
            break;
        case 3:
            cout<<"You selected 3"<<endl;
            vibor = 12;
            break;
        default:
            cout<<"This operation does not exist"<<endl;
            vibor = 0;
            break;
    }

    calc(P,n,vibor);
    

}