#include <cmath>
#include <iostream>

using namespace std;

float Credit(float P, float i, float m, float n)
{
    i = i / 100.0;
    float anwser;
    if (m == 12 || m == 6 || m == 3) {
        anwser = P * pow((1 + (i / (m / 12))), (m / 12 * n));
        cout << "Вы получите: " << anwser << endl;
    }
    else
        cout << "Измените период начисления";
    return anwser;
}

int main() {

    float S, P, i, m, n;
    cout << "Введите процентную ставку:" << endl;
    cin >> i;
    cout << "Введите сумму:" << endl;
    cin >> P;
    cout << "Введите период начисления: 12 мес, 6 мес, 3 мес " << endl;
    cin >> m;
    cout << "Введите срок: " << endl;
    cin >> n;
    Credit(P, i, m, n);

    return 0;
}