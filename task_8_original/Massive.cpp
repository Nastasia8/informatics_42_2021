#include <iostream>
#include <time.h>
#include <iomanip>




class Massive{
private:
    int rows;
    int columns;
    int *sum_odd;
    int *max_odd;
    float *avr;
public:
    int **arr;
    Massive(int rows, int columns);
    ~Massive();
    void Find(){
        int sum = 0;
        std::cout << "" << std::endl;
        std::cout << "Sum in rows with condition" << std::endl;
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                if(j+1 % 2 != 0){
                    sum += arr[i][j];
                }
            }
            sum_odd[i] = sum;
            sum = 0;
            std::cout << std::setw( 5 ) << sum_odd[i];
        }
        int max = -100;
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
        std::cout << std::setw( 4 ) << "Max in column with condition" << std::setw( 20 ) << "Avarage in column" << std::endl;
        for (int j = 0; j < columns; j++){
            for (int i = 0; i < rows; i++){
                if (arr[i][j] % 2 != 0 && arr[i][j] > max){
                    max = arr[i][j];
                }
                sum += arr[i][j];
            }
            avr[j] = (float)sum/rows;
            max_odd[j] = max;
            sum = 0;
            max = -100;
            std::cout << std::setw( 10 ) << max_odd[j] << std::setw( 30 ) << avr[j] << std::endl;
        }
    }

    void Fill(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                arr[i][j] = std::rand() % 200 - 100;
            }
            
        }
    }

    void Veiw(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                std::cout << std::setw( 4 ) << arr[i][j]  << "\t";
            }
            std::cout << "" << std::endl;
        }
    }

    void TransposeMassive(){
        int** buff = new int* [columns];
        for (int i = 0; i < columns; i++){
        buff[i] = new int [rows];
        }
        for (int i = 0; i < columns; i++){
            for (int j = 0; j < rows; j++){
                buff[i][j] = arr[j][i];
            }
        }

        for (int i = 0; i < rows; i++){
         delete[] arr[i];
        }
        delete [] arr;

        arr = new int* [columns];
        for (int i = 0; i < columns; i++){
        arr[i] = new int [rows];
        }

        std::swap(arr, buff);
        std::swap(rows, columns);

        for (int i = 0; i < columns; i++){
         delete[] buff[i];
        }
        delete [] buff;
    }

    void DelNull(){
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
              if (arr[i][j] < 0){
                  arr[i][j] = 0;
              }
            }
        }
    }
};

Massive::Massive(int in_r, int in_c){
    rows = in_r;
    columns = in_c;
        arr = new int* [rows];
        for (int i = 0; i < rows; i++){
        arr[i] = new int [columns];
        }
    sum_odd = new int [columns];
    max_odd = new int [rows];
    avr = new float [rows];
};

Massive::~Massive(){
    for (int i = 0; i < rows; i++){
         delete[] arr[i];
    }
    delete [] arr;
    delete [] sum_odd;
    delete [] max_odd;
    delete [] avr;
};

void checkIn(int &check);
void sum(int in_c, int in_r, Massive& first, Massive& second, Massive& third);

int main(int argc, char const *argv[]){

    std::srand(static_cast<unsigned int>(time(nullptr)));

    std::cout << "Enter count of rows and columns for the array:" << std::endl;
    std::cout << "Number of rows: ";
    int in_r;
    checkIn(in_r);
    std::cout << "Number of columns: ";
    int in_c;
    checkIn(in_c);

    Massive first(in_r , in_c);
    first.Fill();
    std::cout << "First generated massive:" << std::endl;
    first.Veiw();
    first.Find();
    first.TransposeMassive();
    std::cout << "Transposed massive:" << std::endl;
    first.Veiw();

    Massive second(in_c , in_r);
    second.Fill();
    std::cout << "Second generated massive:" << std::endl;
    second.Veiw();
    Massive third(in_c , in_r);
    std:: cout << "Sum of first and second massive: " << std::endl;
    sum(in_c, in_r, first, second, third);
    third.Veiw();
    std::cout << "First generated massive:" << std::endl;
    first.Veiw();
    std:: cout << "Deleted null values from first massive: " << std::endl;
    first.DelNull();
    first.Veiw();
    return 0;
}

void sum(int in_c, int in_r, Massive& first, Massive& second, Massive& third){
    for (int i = 0; i < in_c; i++){
            for (int j = 0; j < in_r; j++){
              third.arr[i][j] = first.arr[i][j] + second.arr[i][j];
            }
    }
}

void checkIn(int &check){
    std::string buffer;
    while (true){
    std::cin >> buffer;
       try
       {
            check = std::stoi(buffer);
            if(check <= 0){
                std::cout << "Enter number more then zero!" << std::endl;
            }else{
                break;
            }  
       }
       catch(const std::exception& e)
       {
           std::cout << "Incorrect type of data, try again" << std::endl;
       }
       
    }
}