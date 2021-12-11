#include <iostream>

using namespace std;

int main()
{   
    int a=12;
    int b=23;
    int c=34;

    int *pa=&a;
    int *pb=&b;
    int *pc=&c;

    cout << "value a = " << *pa << endl;
    cout << "value b = " << *pb << endl;
    cout << "value c = " << *pc << endl;

    return 0;
}
