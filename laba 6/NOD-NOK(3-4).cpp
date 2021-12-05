#include <iostream>
#include <cmath>

using namespace std;

int NOD (int x, int y, int mod, int mod1) // нахождение НОД (наибольший)
{   
    if( x > y )
    {   
        mod=x%y;
        if ( mod != 0 )
        {   
            mod1=y%mod;
            y=mod;
            
        }
        // cout << "mod1 = ";
        return mod1;  
    }
    else 
    {
       mod=y%x;
        if ( mod != 0 )
        {   
            mod1=x%mod;
            x=mod;
        }
        // cout << "mod1 = ";
        return mod1;    
    }

}
int NOK (int x, int y, int mod, int mod1, int nok1) // нахождение НОК (наименьший)
 {  
    nok1=(x*y)/NOD( x, y, mod, mod1);

    // cout << "nok1 = ";
    return nok1; 
 }

int main()
{   
    int x;
    int y;
    int mod;
    int mod1;
    int nok1;

    cout << "write values 'x' and 'y' - " << endl;

    cin >> x;
    cin >> y;

    cout << "NOD = " << NOD( x, y, mod, mod1) << endl;
    cout << "NOK = " << NOK( x, y, mod, mod1, nok1) << endl;
   
    return 0;
}