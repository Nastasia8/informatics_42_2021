#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;

int main()
{  float A[5]={0.08,0.26,0.35,0.41,0.53};
  int SIZE =0;

  SIZE = sizeof(A) / sizeof(A[5]);
  cout << SIZE << endl;
    cout << "answer : " << endl;
    task12(A, SIZE);

  return 0;
}