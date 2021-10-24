#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x = 0;
    long double answer;
    cout << "Answer to question A" << endl;
    for ( x = 0.11; x <= 0.36; x += 0.05 )
    {
        answer = ((pow(sin(x), 3) + pow(cos(x), 3)) * log(x));
        cout << answer << endl;
    }

    float numbers[5] = {0.2, 0.3, 0.38, 0.43, 0.57};
    int i = 0;

    cout << "Answer to question B" << endl;

    for (i = 0; i < 5; i++)
    {
        answer = ((pow(sin(numbers[i]), 3) + pow(cos(numbers[i]), 3)) * log(numbers[i]));
        cout << answer << endl;
    }
    return 0;
}
