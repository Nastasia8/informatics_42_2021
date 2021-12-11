#include <iostream>
#include <cmath>

using namespace std; 

    float sm(float P, float n, float m)
    {
        return P * pow((1 + (0.15)/(m/12)),(m/12*n));
    }
    int main()
{   
    float P;
    float n;

    cout << "white P, n" << endl;
    cin >> P;
    cin >> n;
    
    int count; 
    cout << "write 1 or 2 or 3";
    cin >> count;

    switch (count)
    {
        case 1:
            cout << "gde m:12 = " << sm(P, n, 12.0) << endl;
            break;

        case 2:
            cout << "gde m:6 = " << sm(P, n, 6.0) << endl;
            break;

        case 3:
            cout << "gde m:3 = " << sm(P, n, 3.0) << endl;  
            break;
    } 
    return 0;
}
