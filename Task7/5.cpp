#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, i = 0, g = 0;
    cout << "Enter the last number in the span: ";
    cin >> n;
    int numbers[n];
    vector<int> answer;

    g = 1;
    for (i = 0; i < n; i++){
        numbers[i] = g;
        g++;
    }

    for (i = 2; i <= n; i++){
        for (g = 0; g < n; g++){
            if (numbers[g] % i == 0 && numbers[g] > 3 && numbers[g] != i){
                numbers[g] = 0;
            }
        }
    }

    for (i = 0; i < n; i++){
        if (numbers[i] != 0){
            answer.push_back(numbers[i]);
        }
    }

    for (i = 0; i < answer.size(); i++){
        cout << answer[i] << endl;
    }

    return 0;
}