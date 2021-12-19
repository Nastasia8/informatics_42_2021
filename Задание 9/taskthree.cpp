#include <iostream>
#include <ctime>

using namespace std;

class Massive 

{

 public:
    int rows;
    int cols;
    int **element;
    int **twoelement;
    int **Dopelement;
    //Конструктор двумерного динамического массива
    Massive(int a, int b)
    {
        rows = a;
        cols = b;
        element = new int* [rows];
        for (int i = 0; i <rows; i++)
        {
            element[i] = new int[cols];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                element[i][j] = rand() % 201 + (-100);
            }
        }
    }
    //Деструктор 
    ~Massive()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] element[i];
        }
        delete element;
        for (int i = 0; i < cols; i++)
        {
            delete[] twoelement[i];
        }
        delete twoelement;
        for (int i = 0; i < rows; i++)
        {
            delete[] Dopelement[i];
        }
        delete Dopelement;
        
    }
    //Метод отображения двумерного массива 
    void Info()

    {
        for (int i = 0; i < rows; i++)

        {

            for (int j = 0; j < cols; j++)

                cout << element[i][j] << " ";

            cout << endl;
              
        } 

        cout << endl;  
    }

    //Транспонация матрицы
    void transport()

    {

        twoelement = new int * [cols];

        for (int i = 0; i < cols; i++)

        {

         twoelement[i] = new int[rows];

        }

        for (int i = 0; i < rows; i++)

        {

            for (int j = 0; j < cols; j++)

            {

                twoelement[i][j] = element[j][i];
                cout <<  twoelement[i][j] << " "; 

            } 

            cout << endl;

        }

        cout << endl;
    }

 //Сумма матриц
    void Matricasumm()

    {

        Dopelement = new int * [rows];

        for (int i = 0; i < rows; i++)

        {
           
            Dopelement[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++)

        {

            for (int j = 0; j < cols; j++)

            {

                Dopelement[i][j] = rand() % 201 + (-100);

                cout << Dopelement[i][j] << " ";

            }

            cout << endl;

        }

        cout << endl;

        for (int i = 0; i < rows; i++)

        {

            for (int j = 0; j < cols; j++)

            {

                Dopelement[i][j] = Dopelement[i][j] + element[i][j];
                cout << Dopelement[i][j] << " ";

            }

            cout << endl;

        }

    }

    //изменение массива
    void Change()

    {

        for (int i = 0; i < rows; i++)

        {

            for (int j = 0; j < cols; j++)

            {

                if (element[i][j] < 0)

                {

                    element[i][j] = 0;

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

    Massive Third (2, 2);

    First.Info();

    Second.Info();

    Second.Change();

    Second.Info();

    First.transport();

    Third.Info();

    Third.Matricasumm();


    //Сумма нечетных элементов

    cout << "The sum of odd elements in each row of a two-dimensional array = { ";

    int *sum1 = new int[First.rows];

    for (int i = 0; i < First.rows; i++)

    {

        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.cols; j++)
        {

            if(t % 2 != 0)

            {

                sum += First.element[i][j];

            }

            t++;
        }

        sum1[i] = sum;

    }

    for (int i =0; i < First.rows; i++)

    {

        cout << sum1[i] << " ";

    }

    cout << "}" << endl;

    //Максимальный элемент массива в каждом столбце среди нечётных значений

    cout << "The maximum array element in each column among odd values = { ";

    int *maxcolsnech = new int[First.cols];

    for (int i = 0; i < First.cols; i++)

    {

        int max = -1000;

        for (int j = 0; j < First.rows; j++)

        {

            if((First.element[j][i] % 2 != 0) && First.element[j][i] > max)

            {

                max = First.element[j][i];

            }

        }

        maxcolsnech[i] = max;

    }

    for (int i =0; i < First.cols; i++)

    {

        if (maxcolsnech[i] != -1000)

        {

            cout << maxcolsnech[i] << " ";

        } else 

        {

            cout << "Nothing! ";

        }

    }

    cout << "}" << endl;

    //Среднее значение в каждом столбце

    cout << "The average value in each column = {  ";

    float *AverageStolb = new float[First.cols];

    for (int i = 0; i < First.cols; i++)

    {

        int Average = 0;

        for (int j = 0; j < First.rows; j++)

        {

            Average += First.element[j][i];

        }

        AverageStolb[i] = Average/First.cols;

    }

    for (int i =0; i < First.cols; i++)

    {

        cout << AverageStolb[i] << " ";

    }

    cout << "}" << endl;

    delete AverageStolb;
    delete sum1;
    delete maxcolsnech;
    return 0;
  }
