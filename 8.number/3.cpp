#include <iostream>
#include <ctime>
using namespace std;

class Massive 
{
public:
    int stroki;
    int stolbtzi;
    int **XS;
    int **XS1;
    int **XS2;
    //Задание под 'A'
    Massive (int k, int l)
    {
 stroki = k;
 stolbtzi = l;
 XS = new int* [stroki];
        for (int g = 0; g <stroki; g++)
        {
 XS[g] = new int[stolbtzi];
        }
        for (int g = 0; g < stroki; g++)
        {
            for (int n = 0; n < stolbtzi; n++)
            {
            XS[g][n] = rand() % 201 + (-100);
            }
        }
    }
    //Задание под 'B'
    Massive()
    {
        for (int g = 0; g < stroki; g++)
        {
        delete[] XS[g];
        }
        delete XS;
        for (int g = 0; g < stolbtzi; g++)
        {
        delete[] XS1[g];
        }
        delete XS1;
        for (int g = 0; g < stroki; g++)
        {
        delete[] XS2[g];
        }
        delete XS2;
        
    }
    //Задание под 'С'
    void ShowMetodth()
    {
        for (int g = 0; g < stroki; g++)
        {
        for (int n = 0; n < stolbtzi; n++)
        cout << XS[g][n] << " ";
        cout <<endl;   
        } 
        cout <<endl;  
    }
    //Задание под 'D'
    void TransportationOFMatrix() //транспортировка матрицы
    {
        XS1 = new int * [stolbtzi];
        for (int g = 0; g < stolbtzi; g++)
        {
        XS1[g] = new int[stroki];
        }
        for (int g = 0; g < stroki; g++)
        {
            for (int n = 0; n < stolbtzi; n++)
            {
            XS1[g][n] = XS[n][g];
            cout << XS1[g][n] << " "; 
            } 
            cout <<endl;
        }
        cout <<endl;
    }
    
    //Задание под 'E'
    void SummaMatrixes() // сумма матриц
    {
        XS2 = new int * [stroki];
        for (int g = 0; g < stroki; g++)
        {
        XS2[g] = new int[stolbtzi];
        }
        for (int g = 0; g < stroki; g++)
        {
            for (int n = 0; n < stolbtzi; n++)
            {
            XS2[g][n] = rand() % 201 + (-100);
            cout << XS2[g][n] << " ";
            }
            cout <<endl;
        }
        cout <<endl;
        for (int g = 0; g < stroki; g++)
        {
            for (int n = 0; n < stolbtzi; n++)
            {
            XS2[g][n] = XS2[g][n] + XS[g][n];
            cout << XS2[g][n] << " ";
            }
            cout <<endl;
        }
    }
    //Задание под 'F'
    void Zeroes()
    {
        for (int g = 0; g < stroki;g++)
        {
            for (int n = 0; n < stolbtzi;n++)
            {
                if (XS[g][n] < 0)
                {
                XS[g][n] = 0;
                }
            }
        }
    }
};
int main() 
{
    srand(time(NULL));
    Massive First(3,3);
    Massive Second (4, 4);
    Massive Third (5, 5);
    First.ShowMetodth();
    Second.ShowMetodth();
    Second.Zeroes();
    Second.ShowMetodth();
    First.TransportationOFMatrix();
    Third.ShowMetodth();
    Third.SummaMatrixes();

    //Первое задание
    cout <<"Массив нечетных элементов в каждой строке массива = { ";
    int *SummaNeChet = new int[First.stroki];
    for (int g = 0; g < First.stroki;g++)
    {
        int t = 1;
        int sum = 0;
        for (int n = 0; n < First.stolbtzi;n++)
        {
            if(t % 2 != 0)
            {
            sum += First.XS[g][n];
            }
            t++;
        }
        SummaNeChet[g] = sum;
    }
    for (int g =0; g < First.stroki;g++)
    {
    cout <<SummaNeChet[g] << " ";
    }
    cout << "}" <<endl;

    //Второе задание
    cout <<"Массив максимальных элементов в каждом столбце среди нечетных значений = { ";
    int *MaximumStolbetzOfNechet = new int[First.stolbtzi];
    for (int g = 0; g < First.stolbtzi; g++)
    {
        int max = -1000;
        for (int n = 0; n < First.stroki; n++)
        {
            if((First.XS[n][g] % 2 != 0) && First.XS[n][g] > max)
            {
            max = First.XS[n][g];
            }
        }
        MaximumStolbetzOfNechet[g] = max;
    }
    for (int g =0; g < First.stolbtzi; g++)
    {
        if (MaximumStolbetzOfNechet[g] != -1000){
            cout << MaximumStolbetzOfNechet[g] << " ";
        } else {
        cout <<"Ничего! ";
        }
    }
    cout << "}" <<endl;

    //Третье задание
    cout <<"Массив среднего значения в каждом столбце = { ";
    float *MiddleStolbetz = new float[First.stolbtzi];
    for (int g = 0; g < First.stolbtzi; g++)
    {
        int sred = 0;
        for (int n = 0; n < First.stroki; n++)
        {
        sred += First.XS[n][g];
        }
        MiddleStolbetz[g] = sred/First.stolbtzi;
    }
    for (int g =0; g < First.stolbtzi; g++)
    {
    cout << MiddleStolbetz[g] << " ";
    }
    cout << "}" <<endl;
    delete MiddleStolbetz;
    delete SummaNeChet;
    delete MaximumStolbetzOfNechet;
    return 0;
}   
//С реализацией совещался с Александром Бутусовым, в некоторых моментах понадобилась его помощь. 