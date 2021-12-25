#include <iostream>
#include <cmath>

double S(int p, int n, double i, double m){
    double s = p*pow(1+((i/100)/(m/12)), m/(12*n));
    return s;
}

using namespace std;

int main(){
double Summa, m, I = 0.15;
int P, n;
cout<<"Summa vklada:"<<endl;
cin>>P;
cout<<"Srok depozita:"<<endl;
cin>>n;
for(int m=0; m<=12; m++){
    if (m==1){
        Summa = S(P,n,I,1);
        cout<<"For 12 months: "<<Summa<<endl;
    }
    if (m==6/12){
        Summa = S(P,n,I,0.5);
        cout<<"For 6 months: "<<Summa<<endl;
    }
    if (m==3/12){
        Summa = S(P,n,I,0.25);
        cout<<"For 3 months: "<<Summa<<endl;
    }
}
    return 0;
}