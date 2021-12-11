#include <iostream>
#include <cmath>
using namespace std;
void calc (int P, int n, int choice)
{   
    if (choice!=0){
    int month = n*12;
    float m = month/choice;
    float I = 15;
    
    int S = (P * (pow((1 + ((I / 100) / ( m / 12 ))), (( m / 12 ) * n))));
    cout <<"Summ  = "<<S;
    } else {
    
        cout << "x3"<<endl;

    }

}



int main()
{
    int P,n,choice;
    cout << " Enter P,n = ";
    cin >> P >> n;
    cout <<" Choose one of three "<<endl;
    cout <<"1 - 3"<<endl;
    cout <<"2 - 6"<<endl;
    cout <<"3 - 12"<<endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout<<"You selected 1"<<endl;
            choice = 3;
            break;
        case 2:
            cout<<"You selected 2"<<endl;
            choice = 6;
            break;
        case 3:
            cout<<"You selected 3"<<endl;
            choice = 12;
            break;
        default:
            cout<<"This operation does not exist"<<endl;
            choice = 0;
            break;
    }

    calc(P,n,choice);
    

}