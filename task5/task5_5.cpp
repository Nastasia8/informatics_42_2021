#include <iostream>
#include <limits>
using namespace std;

void fill(int **array, int n, int m){
    std::srand(static_cast<unsigned int>(time(nullptr)));
        for (int j = 0; j < n; j++){
            for (int i = 0; i < m; i++){
                array[j][i] = std::rand() % 100;
            }
            
        }
}

void show(int **array, int n, int m){
    for (int j = 0; j < n; j++){
            for (int i = 0; i < m; i++){
                std::cout << array[j][i]  << "\t";
            }
            std::cout << "" << std::endl;
        }
}



void find(int **array, int n, int m, int *minr){
    for (int j = 0; j < n; j++){
        minr[j] = array[j][0];
            for (int i = 0; i < m; i++){
                if (minr[j] > array[j][i]){
                    minr[j] = array[j][i];
                }
                
            }
        }
}

void check(int &in){
    while (true){
        cin >> in;
        if(in <= 0){
            cout << "Enter number more than zero!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else{
            break;
        }
    }
}

int main(int argc, char const *argv[]){
    cout << "Number of rows: ";
    int n;
    check(n);
    cout << "Number of columns: ";
    int m;
    check(m);

    int **array = new int* [n];
    for (int i = 0; i < n; i++){
    array[i] = new int [m];
    }
    fill(array, n, m);
    show(array, n, m);
    cout << "" << endl;
    int *minr = new int[n];
    int min;
    find(array, n, m, minr);
    cout << "Min in each row:" << endl;
    for(int i=0 ; i < n ; i++){
        cout << minr[i] << "\t";
    }
    

    delete [] array;
    for (int i = 0; i < n; i++)
    {
        delete[] array[i];
    }
    delete [] minr;
}