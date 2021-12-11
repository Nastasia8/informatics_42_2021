#include <iostream>

using namespace std;

int NOD (int x, int y) 
{
    while (x!=0 && y!=0) 
    {
        if (x>y) 
        {
            x=x%y;
        }
        else 
            y=y%x;
    }
    return x+y;
}
 
int main () 
{
    int N;
    int x;
    int y;

    cout << " white 'N'" << endl;
    cin >> N;
    cout << "///" << endl;

    cin >> y; 

    for (int i=2; i<=N; i++) 
    {
        cin >> x;
        y = NOD (x, y);
    }
    cout << "///" << endl;
    cout << "NOD = " << y << endl;
    return 0;
}