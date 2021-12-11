#include <iostream>
#include <limits>
using namespace std;

void fill(int *arr, int n){
    srand(static_cast<unsigned int>(time(NULL)));
        for (int j = 0; j < n; j++){
            arr[j] = rand() % 100;
        }
}

void show(int *arr, int n){
        for (int j = 0; j < n; j++){
            cout << arr[j]  << "\t";
        }
}

void find(int *arr, int n, int &min){
    min = arr[0];
    for (int j = 1; j < n; j++){
            if (min > arr[j]){
                min = arr[j];
            }
            
        }
}

int main(int argc, char const *argv[]){
    int n;
    cout << "Enter a length of array:" << endl;
    cout << "Length: ";
    while (true){
        cin >> n;
        if(n <= 0){
            cout << "Enter number more than zero!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else{
            break;
        }
    }
    int *array = new int[n];
    fill(array, n);
    show(array, n);
    cout << "" << endl;
    int min;
    find(array, n, min);
    cout << "Min in array: " << min << endl;
    delete [] array;
}