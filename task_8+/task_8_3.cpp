#include <iostream>
#include <ctime>

using namespace std;

class Massive {
public:
    int** arr{};
    int** arr_db{};
    int** arr_t{};
    int* Operation;
    int rows = 4;
    int cols = 5;

    Massive() 
    {
        arr = new int* [rows];

        for (int i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
        } 
    }

    ~Massive()
    {
        for (int i = 0; i < rows; i++)
        {
            delete arr[i];
            delete arr_db[i];
        }
        for (int i = 0; i < cols; i++)
        {
            delete arr_t[i];
        }


        delete[] arr_t;       
        delete[] arr;
        delete[] arr_db;        
    }

    void Set_Value()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr[i][j] = rand() % 201 + (-100);
            }
        }
    }

    void Show_Value()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl << endl;
        }
    }

    int Odd_Elem()
    {
        Operation = new int[rows];

        for (int i = 0; i < rows; i++)
        {
            int sum = 0;
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] % 2 != 0)
                {
                    sum += arr[i][j];
                }
                Operation[i] = sum;
            }
        }

        cout << "Sum Odd elem rows" << endl;
        for (int i = 0; i < rows; i++)
        {
            cout << Operation[i] << "\t";

        }
        cout << endl;

        delete[] Operation;

        return 0;
    }

    void Max_Elem_Cols()
    {
        Operation = new int[cols];

        for (int i = 0; i < cols; i++)
        {
            int max_elem = arr[0][i];
            for (int j = 0; j < rows; j++)
            {
                if (arr[j][i] % 2 != 0)
                {
                    if (max_elem < arr[j][i])
                    {
                        max_elem = arr[j][i];
                    }
                    Operation[i] = max_elem;
                }
            }
        }

        cout << "Max Odd elem cols" << endl;
        for (int i = 0; i < cols; i++)
        {
            cout << Operation[i] << "\t";

        }
        cout << endl;

        delete[] Operation;
    }

    void Average_Value_Elem_Cols()
    {

        Operation = new int[cols];

        for (int i = 0; i < cols; i++)
        {
            int aver_val = 0;
            for (int j = 0; j < rows; j++)
            {
                aver_val += arr[j][i];

            }
            aver_val /= rows;
            Operation[i] = aver_val;
        }

        cout << "Average value elem cols" << endl;
        for (int i = 0; i < cols; i++)
        {
            cout << Operation[i] << "\t";

        }
        cout << endl;

        delete[] Operation;
    }

    void Transposition()
    {
        arr_t = new int* [cols];
        for (int i = 0; i < cols; i++)
        {
            arr_t[i] = new int[rows];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr_t[j][i] = arr[i][j];

            }

        }

        cout << endl << "Transposition" << endl;

        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << arr_t[i][j] << "\t";

            }
            cout << endl << endl;
        }
    }

    void Sum_matrix()
    {
        srand(time(NULL));

        arr_db = new int* [rows];

        for (int i = 0; i < rows; i++)
        {
            arr_db[i] = new int[cols];
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr_db[i][j] = rand() % 201 + (-100);
            }
        }

        cout << endl << "New marix:" << endl;
        for (int i = 0; i < rows; i++)
        {

            for (int j = 0; j < cols; j++)
            {
                cout << arr_db[i][j] << "\t";
            }
            cout << endl << endl;
        }

        cout << endl << "Sum marix:" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                arr_db[i][j] += arr[i][j];
                cout << arr_db[i][j] << "\t";
            }
            cout << endl << endl;
        }



    }

    void Edit_arr()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] < 0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }

};

int main() {
    //srand(time(NULL));
    Massive mas;

    mas.Set_Value();
    mas.Show_Value();
    mas.Odd_Elem();
    mas.Max_Elem_Cols();
    mas.Average_Value_Elem_Cols();
    mas.Transposition();
    mas.Sum_matrix();
    mas.Edit_arr();
    cout << endl << "Edit matrix" << endl;
    mas.Show_Value();

    return 0;
}
