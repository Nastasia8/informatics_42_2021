#include <iostream>
#include <math.h>

using namespace std;

void answer (float P, float n, float m, float I);

int main(){

    float P = 0;

    float n = 0;

    float m = 0;

    float S = 0;

    float I = 15;

    int Period = 0;

    cout << "Enter the deposit amount: ";
    cin >> P;

    cout << "Enter the term of the deposit: ";
    cin >> n;

    cout << "Enter the interest period (3, 6, or 12): ";
    cin >> Period;

    m = (12 / Period);

    answer(P, n, m, I);

    return 0;
}


void answer (float P, float n, float m, float I){

    float answer = 0;

    answer = (P * pow((1 + ((I / 100) / (m / 12))), ((m / 12) * n)));

    cout << "Answer to task: " << answer << endl;

}