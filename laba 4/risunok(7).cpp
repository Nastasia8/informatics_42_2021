#include <iostream>

using namespace std;

void RIS(int height, int width, char sim)
{
    for (int i = 0; i < height; ++i)

        cout << sim;
        cout << endl;

    for (int i = 0; i < width - 2; ++i)
    {
        cout << sim;

        for (int j = 0; j < height - 2; ++j)
        cout << ' ';
        cout << sim <<endl;
    }

    if (width > 1) 
    {
        for (int i = 0; i < height; ++i)
        cout << sim;
        cout << endl;
    }
}

int main() 
{
    int height;
    int width;
    int sim;

    cout << "white height, width and symbol" << endl; 
    
    cin >> height; // высота
    cin >> width; // ширина
    cin >> sim;

    RIS(height, width, sim);
    return 0;
}