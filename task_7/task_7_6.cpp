#include <iostream>

using namespace std;

double Ch(int N, int K)
{
    double Sum = 1;
    for (int i = 1; i <= K; i++)
        Sum *= (N - i + 1) / float(i);
    return Sum;
}

int fun(int N)
{
    for (int j = 0; j <= N; j++) {
        for (int i = 0; i <= j; i++)
            cout << Ch(j, i) << " ";
        cout << "\n";
    }
    return 0;
}

int main()
{
    int n = 0;
    cout << "Enter the nimber of lines:= ";
    cin >> n;
    cout << endl;
    fun(n); 
    return 0;
}