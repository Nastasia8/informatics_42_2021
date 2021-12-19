#include <iostream>
#include <ctime>

using namespace std;

class Massive 
{
public:
    int rows;
    int columns;
    int **Giga;
    int **TrGiga;
    int **DopGiga;
    //a
    Massive(int r, int c)
    {
        rows = r;
        columns = c;
        Giga = new int* [rows];
        for (int i = 0; i <rows; i++)
        {
            Giga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Giga[i][j] = rand() % 201 + (-100);
            }
        }
    }
    //b
    ~Massive()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] Giga[i];
        }
        delete Giga;
        for (int i = 0; i < columns; i++)
        {
            delete[] TrGiga[i];
        }
        delete TrGiga;
        for (int i = 0; i < rows; i++)
        {
            delete[] DopGiga[i];
        }
        delete DopGiga;
        
    }
    //c
    void showInfo()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
                cout << Giga[i][j] << " ";
            cout << endl;   
        } 
        cout << endl;  
    }
    //d
    void transport()
    {
        TrGiga = new int * [columns];
        for (int i = 0; i < columns; i++)
        {
            TrGiga[i] = new int[rows];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                TrGiga[i][j] = Giga[j][i];
                cout << TrGiga[i][j] << " "; 
            } 
            cout << endl;
        }
        cout << endl;
    }
    //f
    void zero()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (Giga[i][j] < 0)
                {
                    Giga[i][j] = 0;
                }
            }
        }
    }
    //e
    void sumMatrix()
    {
        DopGiga = new int * [rows];
        for (int i = 0; i < rows; i++)
        {
            DopGiga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = rand() % 201 + (-100);
                cout << DopGiga[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j];
                cout << DopGiga[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() 
{
    srand(time(NULL));

    Massive First(3,3);
    Massive Second (4, 4);
    Massive Third (2, 2);
    First.showInfo();
    Second.showInfo();
    Second.zero();
    Second.showInfo();
    First.transport();
    Third.showInfo();
    Third.sumMatrix();


    //1
    cout << "Array of odd elements in each row of the array = { ";
    int *sumNechet = new int[First.rows];
    for (int i = 0; i < First.rows; i++)
    {
        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++)
        {
            if(t % 2 != 0)
            {
                sum += First.Giga[i][j];
            }
            t++;
        }
        sumNechet[i] = sum;
    }
    for (int i =0; i < First.rows; i++)
    {
        cout << sumNechet[i] << " ";
    }
    cout << "}" << endl;

    //2
    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns];
    for (int i = 0; i < First.columns; i++)
    {
        int max = -1000;
        for (int j = 0; j < First.rows; j++)
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max)
            {
                max = First.Giga[j][i];
            }
        }
        maxStolbNechet[i] = max;
    }
    for (int i =0; i < First.columns; i++)
    {
        if (maxStolbNechet[i] != -1000){
            cout << maxStolbNechet[i] << " ";
        } else {
            cout << "Nothing! ";
        }
    }
    cout << "}" << endl;

    //3
    cout << "Array of average value in each column = { ";
    float *sredStolb = new float[First.columns];
    for (int i = 0; i < First.columns; i++)
    {
        int sred = 0;
        for (int j = 0; j < First.rows; j++)
        {
            sred += First.Giga[j][i];
        }
        sredStolb[i] = sred/First.columns;
    }
    for (int i =0; i < First.columns; i++)
    {
        cout << sredStolb[i] << " ";
    }
    cout << "}" << endl;

    delete sredStolb;
    delete sumNechet;
    delete maxStolbNechet;
    return 0;
}   
