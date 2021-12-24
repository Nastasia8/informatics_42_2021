//Код взят у Бутусова Александра
#include <iostream>
#include <ctime>

using namespace std;

class Massive {
    public:
        int rows;
        int columns;
        int **Giga;  //двумерный динамический массив
        int **TrGiga;  //транспонированная матрица (динамическая)
        int **DopGiga;  //дополнительный массив (двумерный динамический)
    //a
        Massive(int r, int c){
        rows = r;
        columns = c;
        Giga = new int* [rows]; //создаём динамический массив
        for (int i = 0; i <rows; i++){
            Giga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++){ //заполняем случайными числами
            for (int j = 0; j < columns; j++){
                Giga[i][j] = rand() % 201 + (-100);
            }
        }
    }
    //b
    ~Massive(){
        for (int i = 0; i < rows; i++){ //очищаем ячейки массива
            delete[] Giga[i];
        }
        delete Giga; //удаляем двумерный массив
        for (int i = 0; i < columns; i++){ //очищаем ячейки транспонированнай матрицы 
            delete[] TrGiga[i];
        }
        delete TrGiga; //удаляем транспонированную матрицу
        for (int i = 0; i < rows; i++){ //очищаем ячейки дополнительного двумерного массива
            delete[] DopGiga[i];
        }
        delete DopGiga; //удаляем дополнительный массив
        
    }
    //c
    void showInfo(){ //вывод двумерного массива на экран
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                cout << Giga[i][j] << " ";
            }
            cout << endl;   
        } 
        cout << endl;  
    }
    //d
    void transport(){ //транспонируем матрицу
        TrGiga = new int * [columns];
        for (int i = 0; i < columns; i++){
            TrGiga[i] = new int[rows];
        }
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                TrGiga[i][j] = Giga[j][i];
                cout << TrGiga[i][j] << " "; 
            } 
            cout << endl;
        }
        cout << endl;
    }
    //f
    void zero(){  
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                if (Giga[i][j] < 0){ //заменяем отрицательные значения нулями
                    Giga[i][j] = 0;
                }
            }
        }
    }
    //e
    void sumMatrix(){ 
        DopGiga = new int * [rows]; //создаём матрицу
        for (int i = 0; i < rows; i++){
            DopGiga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++){ //задаём значения ячеек матрицы
            for (int j = 0; j < columns; j++){
                DopGiga[i][j] = rand() % 201 + (-100);
                cout << DopGiga[i][j] << " "; //выводим матрицу на экран
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < rows; i++){ 
            for (int j = 0; j < columns; j++){
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j]; //находим сумму двух матриц
                cout << DopGiga[i][j] << " "; //выводим на экран
            }
            cout << endl;
        }
    }
};

int main(){
    srand(time(NULL));
    Massive First(3,3); //берём вкачестве примера массив 3х3
    Massive Second (4, 4); //берём вкачестве примера массив 4х4
    Massive Third (2, 2);  //берём вкачестве примера массив 2х2
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
    for (int i = 0; i < First.rows; i++){
        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++){
            if(t % 2 != 0){ //находим нечётные числа в массиве
                sum += First.Giga[i][j]; //складываем нечётные числа в каждой строке массива
            }
            t++;
        }
        sumNechet[i] = sum; //вводим результат в одномерный массив по строкам
    }
    for (int i =0; i < First.rows; i++){
        cout << sumNechet[i] << " "; //выводим одномерный массив с ответом
    }
    cout << "}" << endl;

    //2
    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns];
    for (int i = 0; i < First.columns; i++){
        int max = -1000;
        for (int j = 0; j < First.rows; j++){
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max){ //находим максимум среди нечётных чисел столбцов массива
                max = First.Giga[j][i]; //запоминаем максимум из столбца
            }
        }
        maxStolbNechet[i] = max; //записываем максимумы столбцов в одномерный массив
    }
    for (int i =0; i < First.columns; i++){
        if (maxStolbNechet[i] != -1000){ //проверяем наличие максимума
            cout << maxStolbNechet[i] << " "; //выводим массив максимумов
        } else {
            cout << "Nothing! "; //если максимумы не найдены
        }
    }
    cout << "}" << endl;

    //3
    cout << "Array of average value in each column = { ";
    float *sredStolb = new float[First.columns]; //создаём одномрный массив
    for (int i = 0; i < First.columns; i++){
        int sred = 0;
        for (int j = 0; j < First.rows; j++){
            sred += First.Giga[j][i]; //складываем числа столбца
        }
        sredStolb[i] = sred/First.columns; //находим среднее столбца
    }
    for (int i =0; i < First.columns; i++){
        cout << sredStolb[i] << " "; //выводим массив средних значений по столбцам
    }
    cout << "}" << endl;

    delete sredStolb; //удаляем массив
    delete sumNechet;   //удаляем массив
    delete maxStolbNechet;   //удаляем массив
    return 0;
}   