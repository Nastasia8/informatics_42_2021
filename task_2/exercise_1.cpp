#include <iostream>
#include <cmath>

using namespace std;

float vector_module(float, float, float);
float unit_vector_coordinate(float, float);
float scalae_prod(float, float, float, float, float, float);
float vector_product_even(float, float, float, float);
float vector_product_odd(float, float, float, float);

int main()
{
	float first_vector_x = 1;
	float first_vector_y = 5;
	float first_vector_z = 3;
	float second_vector_x, second_vector_y, second_vector_z;

	// 1. Выяислить длинну вектора;
	cout << "1. Vector module:= " << vector_module(first_vector_x, first_vector_y, first_vector_z) << endl << endl;

	// 2. Вычислить вектор единичной длинны сонаправленный с заданым;
	cout << "2. Unit_vector_coordinate:= " << "{ " << unit_vector_coordinate(first_vector_x, vector_module(first_vector_x, first_vector_y, first_vector_z)) << "; " << unit_vector_coordinate(first_vector_y, vector_module(first_vector_x, first_vector_y, first_vector_z)) << "; " << unit_vector_coordinate(first_vector_z, vector_module(first_vector_x, first_vector_y, first_vector_z)) << " }" << endl << endl;

	// 3. Вычислить скалярное произведение векторов;
	cout << "3. Enter vector coordinates" << endl;
	cout << "	Enter_X: ";
	cin >> second_vector_x;
	cout << "	Enter_Y: ";
	cin >> second_vector_y;
	cout << "	Enter_Z: ";
	cin >> second_vector_z;
	cout << endl << "Coordinates_first_vector:= " << "{ " << first_vector_x << "; " << first_vector_y << "; " << first_vector_z << " }" << endl;
	cout << "Coordinates_second_vector:= " << "{ " << second_vector_x << "; " << second_vector_y << "; " << second_vector_z << " }" << endl;
	cout << "Scalae_product:= " << scalae_prod(first_vector_x, first_vector_y, first_vector_z, second_vector_x, second_vector_y, second_vector_z) << endl << endl;

	// 4. Вычислить векторное произведение векторов;
	cout << "4. Vector_product:= " << vector_product_odd(first_vector_y, first_vector_z, second_vector_y, second_vector_z) << "i " << "+ (" << vector_product_even(first_vector_x, first_vector_z, second_vector_x, second_vector_z) << "j) " << "+ " << vector_product_odd(first_vector_x, first_vector_y, second_vector_x, second_vector_y) << "k" << endl;
}

// Функция вычисления модули вектора;
float vector_module(float x, float y, float z) 
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

// Функция вычисления координат единичного вектора (орта);
float unit_vector_coordinate(float coord, float vec_mod)
{
	return coord / vec_mod;
}

// Функция вычисления скалярного произведения
float scalae_prod(float first_vector_x, float first_vector_y, float first_vector_z, float second_vector_x, float second_vector_y, float second_vector_z)
{
	return (first_vector_x * second_vector_x) + (first_vector_y * second_vector_y) + (first_vector_z * second_vector_z);
}


// Функция счета алгебраического дополнения (для четных элементов)
float vector_product_even(float first_vector_coord, float second_vector_coord, float third_vector_coord, float fourth_vector_coord)
{
	return (-((first_vector_coord * fourth_vector_coord) - (second_vector_coord * third_vector_coord)));
}

// Функция счета алгебраического дополнения (для нечетных элементов)
float vector_product_odd(float first_vector_coord, float second_vector_coord, float third_vector_coord, float fourth_vector_coord)
{
	return ((first_vector_coord * fourth_vector_coord) - (second_vector_coord * third_vector_coord));
}
