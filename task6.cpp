// Извините за такой объём, хотелось получить опыт работы и решения проблем с большими программами)

#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int NOD(int nok1, int nok2);

int main(){
// 1

    int f[15], n = 0, start = 0, x = 0, i = 0, nod1 = 0, nod2 = 0, nok1 = 0, nok2 = 0, a1 = 0, a2 = 0, a3 = 0, d = 0, D = 0, i1 = 0, i2 = 0, i3 = 0, answer = 1;
    vector<int> value;
    vector<int> A1;
    vector<int> A2;
    vector<int> A3;
    vector<int> nod;

    f[0] = 0;
    f[1] = 3;
    f[2] = 5;

    cout << f[0] << "; " << f[1] << "; " << f[2] << "; ";

    for(n = 3; n < 15; n++){

        f[n] = f[n - 1] + f[n - 2] + f[n - 3];

        cout << f[n] << "; ";

    }

    
// 2

    // 10 -> 2

    cout << "Enter the number (0 < number < 385): ";
    cin >> start;

    if (start > 385 || start < 0){

        cout << "Not correct value, try again...";

        exit(0);

    }

    else{

        x = start;

        while (x > 0){

            if (x % 2 == 0){

                value.push_back(0);

            }

            else{

                
                value.push_back(1);

            }

            x = x / 2;

        }

        reverse(value.begin(), value.end());

        cout << "A number in binary notation: ";

        for (i = 0; i < value.size(); i++){

            cout << value[i];

        }

        cout << endl;

        value.clear();

        // 10 -> 8

        cout << "Enter the number: ";
        cin >> start;
        x = start;

        while (x > 0){

            value.push_back(x % 8);

            x /= 8;

        }

        reverse(value.begin(), value.end());

        cout << "A number in octal notation: ";

        for (i = 0; i < value.size(); i++){

            cout << value[i];

        }

        cout << endl;

        value.clear();

        // 10 -> 16

        cout << "Enter the number: ";
        cin >> start;
        x = start;
        n = 0;

        while (x > 0){

            value.push_back(x % 16);

            x /= 16;

        }

        reverse(value.begin(), value.end());

        cout << "A number in hexadecimal notation: ";

        for (i = 0; i < value.size(); i++){

            if(value[i] <= 9){

                cout << value[i];

            }
            
            else{

                switch(value[i]){

                    case 10:

                        cout << "A";;

                    break;

                    case 11:

                        cout << "B";

                    break;

                    case 12:

                        cout << "C";

                    break;

                    case 13:

                        cout << "D";

                    break;

                    case 14:

                        cout << "E";

                    break;

                    case 15:

                        cout << "F";

                    break;

                    default:

                        cout << "Error";

                    exit(0);
                }
            }
        }

        cout << endl;
    }

// 3

    cout << "Enter the numbers: " << endl;

    cin >> nod1 >> nod2;

    if (nod1 < 0 || nod2 < 0){

        cout << "Error, incorrect value of the numbers, try again..." << endl;

        exit(0);

    }

    while (nod1 != nod2) {

        if (nod1 > nod2){

            nod1 = nod1 - nod2;

        }

        else{

            nod2 = nod2 - nod1;

        }
    }
  
    cout << "NOD for numbers: " << nod1 << endl;

// 4

    cout << "Enter the number: " << endl;

    cin >> nok1 >> nok2;

    if (nok1 < 0 || nok2 < 0){

        cout << "Eroror, incorrect value, try again..." << endl;

        exit(0);

    }

    cout << "NOK for numbers: " << nok1 * nok2 / NOD(nok1, nok2) << endl;

// 5

    //a)
    
    cout << "Enter the numbers: " << endl;
    cin >> a1 >> a2 >> a3;

    if (a1 < 0 || a2 < 0 || a3 < 0){

        cout << "Enter correct value of the numbers and try again..." << endl;

        exit(0);

    }

    d = NOD(a1, a2);
    D = NOD(d, a3);

    cout << "a) NOD for three numbers: " << D << endl;

    //b)

    cout << "Enter the numbers: " << endl;
    cin >> a1 >> a2 >> a3;

    int chislo = 0, div = 0;
    vector<int> prostoe;

    i = 1;

    for (chislo = 2; chislo <= (a1 / 2); chislo++){

        for (div = 2; div < chislo; div++){

            if (chislo > 2 && chislo % div == 0){

                break;

            }
            else{
                
                if (i = 1){

                prostoe.push_back(chislo);

                }
                else if(prostoe[i - 1] != chislo){

                    prostoe.push_back(chislo);

                }

            }

            i++;

        }

    }

    vector<int> chisla;
    chisla = prostoe;

    while (a1 > 1){
 
        for (i = 0; i < chisla.size(); i++){

            if(a1 % 2 == 0){

                A1.push_back(2);

                a1 /= 2;

            }

            else if(a1 % chisla[i] == 0){

                A1.push_back(chisla[i]);

                a1 /= chisla[i]; 

            }

        }

    }


    prostoe.clear();
    chisla.clear();
    chislo = 0;
    div = 0;

    i = 1;

    for (chislo = 2; chislo <= (a2 / 2); chislo++){

        for (div = 2; div < chislo; div++){

            if (chislo > 2 && chislo % div == 0){

                break;

            }
            else{
                
                if (i = 1){

                prostoe.push_back(chislo);

                }
                else if(prostoe[i - 1] != chislo){

                    prostoe.push_back(chislo);

                }

            }

            i++;

        }

    }

    chisla = prostoe;

    while (a2 > 1){
 
        for (i = 0; i < chisla.size(); i++){

            if(a2 % 2 == 0){

                A2.push_back(2);

                a2 /= 2;

            }

            else if(a2 % chisla[i] == 0){

                A2.push_back(chisla[i]);

                a2 /= chisla[i]; 

            }

        }

    }

    prostoe.clear();
    chisla.clear();
    chislo = 0;
    div = 0;

    i = 1;

    for (chislo = 2; chislo <= (a3 / 2); chislo++){

        for (div = 2; div < chislo; div++){

            if (chislo > 2 && chislo % div == 0){

                break;

            }
            else{
                
                if (i = 1){

                prostoe.push_back(chislo);

                }
                else if(prostoe[i - 1] != chislo){

                    prostoe.push_back(chislo);

                }

            }

            i++;

        }

    }

    chisla = prostoe;

    while (a3 > 1){
 
        for (i = 0; i < chisla.size(); i++){

            if(a3 % 2 == 0){

                A3.push_back(2);

                a3 /= 2;

            }

            else if(a3 % chisla[i] == 0){

                A3.push_back(chisla[i]);

                a3 /= chisla[i]; 

            }

        }

    }

    i = 0;

    for (i1 = 0; i1 < A1.size(); i1++){

        for (i2 = 0; i2 < A2.size(); i2++){

            for (i3 = 0; i3 < A3.size(); i3++){

                if (A1[i1] == A2[i2] && A1[i1] == A3[i3]){

                    nod.push_back(A1[i1]);

                }

            }

        }

    }

    answer *= nod[0];

    for (i = 1; i < nod.size(); i++){

        if (nod[i - 1] != nod[i]){

            answer *= nod[i];

        }
    }

    cout << "b) NOD for three numbers: "<< answer << endl;

    return 0;
}

int NOD(int nok1, int nok2)
{

    int div;

    if (nok1 == nok2)  return nok1;
    
    int d = nok1 - nok2;
  
    if (d < 0){

        d = -d;  div = NOD(nok1, d);

    }

    else{

        div = NOD(nok2, d);

    }

    return div;

}