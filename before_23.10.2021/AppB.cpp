#include <iostream>
#include <cmath>
#include "objects.h"
#include "function.h"
using namespace std;

int main(void)
{
	double arr[] = {0.35, 1.28, 3.51, 5.21, 4.16};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	func_y(a, b, size, arr);
}