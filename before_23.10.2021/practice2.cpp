#include <iostream>
#include <cmath>

using namespace std;

float length(int x, int y, int z);
void ort(float length, int x, int y, int z);
void multiply(int x, int y, int z);

int main()
{
	float v_length = length(1, 5, 3);
	printf("Vector length: %f\n", v_length);
	ort(v_length, 1, 5, 3);
	multiply(1, 5, 3);
	
	return 0;
}

float length(int x, int y, int z) // Calculates vector length
{
	float len = pow((pow(x, 2.0) + pow(y, 2.0) + pow(z, 2.0)), 1.0 / 2.0);
	return len;
}


void ort(float length, int x, int y, int z) // Calculates ort
{
	float xo = x / length;
	float yo = y / length;
	float zo = z / length;
	
	printf("\nOrt equals: (%f, %f, %f)\n", xo, yo, zo);
}


void multiply(int x, int y, int z) // Calculates scalar and vector products
{
	int xb, yb, zb;
	printf("\nType the x value\n");
	scanf("%i",&xb);
	printf("Type the y value\n");
	scanf("%i",&yb);
	printf("Type the z value\n");
	scanf("%i",&zb);
	printf("The scalar product is equal to %i\n", (x * xb + y * yb + z * zb));
	int i = y * zb - yb * z;
	int j = x * zb - xb * z;
	int k = x * yb - xb * y;
	printf("The vector product is equal to %di%+dj%+dk", i, j, k); 
}
