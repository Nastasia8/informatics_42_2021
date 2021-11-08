#include <iostream>

using namespace std;

void rectangle (int length, int height, char symbol);

int main(){

    int length = 0;
    int height = 0;
    char symbol = 0;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter height of the rectangle: ";
    cin >> height;

    cout << "Enter symbol - outline: ";
    cin >> symbol;

    rectangle (length, height, symbol);

    return 0;
}


void rectangle(int length, int height, char symbol){

    int l = 0;

    int h = 0;

    int i = 0;

    int count = 0;

    for(l = 0; l < length; l++){

        for(h = 0; h < height; h++){
            
            if(l == 0){

                cout << symbol;

                count += 1;
                
            }

            if(l == length - 1){

                cout << symbol;

            }

            if(l > 0 & l < (length - 1)){

                if(h == 0){

                    cout << symbol;

                }

                if (h == (height - 1)){
                    
                    for(i = 0; i < (count - 2); i ++){

                        cout << " ";

                    }

                    cout << symbol;

                }

            }
                
            cout << " ";

        }

        cout << "" << endl;

    }
}