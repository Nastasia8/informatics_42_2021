#include <iostream>
#include <math.h>

using namespace std;

void sum(int start, int end);

int main(){

    int start;

    int end;

    cout << "Enter the start of the range: ";
    cin >> start;

    cout << "Enter the end of the range: ";
    cin >> end;

    sum(start, end);

    return 0;
}


void sum(int start, int end){

    int answer = 0;

    int i = 0;

    for (i = start; i <= end; i++){

        if (i % 2 == 0){

            answer += i;

        }

    }

    cout << answer << endl;
}