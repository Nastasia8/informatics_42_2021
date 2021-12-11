#include <iostream>
#include <limits>
using namespace std;

void find(int *arr, int n, int &min){
    
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
    srand(static_cast<unsigned int>(time(NULL)));
        for (int j = 0; j < n; j++){
            array[j] = rand() % 100;
            cout << array[j]  << "\t";
        }
    cout << "" << endl;
    int min;

    min = array[0];
    for (int j = 1; j < n; j++){
            if (min > array[j]){
                min = array[j];
            }
            
        }

    cout << "Min in array: " << min << endl;
    delete [] array;
}