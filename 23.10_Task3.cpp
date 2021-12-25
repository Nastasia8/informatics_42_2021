#include <iostream>
#include <cmath>

using namespace std;



void Summa(int k){
    double s = 0;
    for(float n=1; n<=k; n++){
        s += 2/((2*n+1)*(2*n+3));
    }
    cout<<"Summa = "<<s<<endl;
}
void prod(int k){
    int p = 1;
    for(float n=1; n<=k; n++){
        p *= pow(-1, n-1)+n;
    }
    cout<<"Proizvedenie = "<<p<<endl; 
}

int main(){
int k;
cout<<"k = "; cin>>k;
Summa(k);
prod(k);

    return 0;
}