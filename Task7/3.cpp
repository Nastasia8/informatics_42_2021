#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> array;
    int number = 0, i = 0;
    cout << "Enter the number: ";
    cin >> number;

    while(number > 1){
        if(number % 2 == 0){
            number /= 2;
            array.push_back(number);
        }
        else{
            number *= 3;
            number += 1;
            number /= 2;
            array.push_back(number);
        }
    }

    for (i = 0; i < array.size(); i++){
        cout << array[i] << endl;
    }
}