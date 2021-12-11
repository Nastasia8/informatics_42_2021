#include <iostream>
using namespace std;

void function (int m){
    int *A = new int[m + 1];
    for (int g=0; g<=m; g++){
        A[g]=g;
    }
    for (int g=2; g*g<=m; g++)
    {
        if (A[g]) {
            for (int x= g*g; x<=m; x+=g){
                A[x] = 0;
            }       
        }
    }
    for (int g=2; g<m; g++){
        if (A[g]) {
            cout <<A[g]<<' '; 
        } 
    } 
    cout<<endl<<endl;
    delete[] A; 
}
int main()
{
    int m;
    cin>>m;
    function(m);

 return 0;
}