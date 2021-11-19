#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int main()
{

	setlocale(LC_ALL, "Russian");

	double Sum_Xi_Yi = 0;
	double Sum_Yi_vich = 0;
	double Xi[8] = {2.1, 2.30, 2.5, 2.7, 2.9, 3.1, 3.3, 3.5};
	double Sum_Xi = 0;
	double Yi[8] = {1.752, 1.762, 1.777, 1.797, 1.821, 1.850, 1.884, 1.944};
	double Sum_Yi = 0;

	double free_members[2];
	double polynomial_coef[2];
	double Xi_2[8];
	double Sum_Xi_2 = 0;
	double Xi_Yi[8];
	double Xi_Yi_2[8];
	double Yi_vich[8];
	double DYi[8];
	double DYi_2[8];
	double Sum_DYi_2 = 0;

	for (int i = 0; i < 8; i++)
	{
		Xi_2[i] = pow(Xi[i], 2);
	}

	for (int i = 0; i < 8; i++)
	{
		Xi_Yi[i] = Xi[i] * Yi[i];
	}

	for (int i = 0; i < 8; i++)
	{
		Sum_Xi_Yi += Xi_Yi[i];
	}

	for (int i = 0; i < 8; i++)
	{
		Xi_Yi_2[i] = Xi_2[i] * Yi[i];
	}

	for (int i = 0; i < 8; i++)
	{
		Sum_Xi += Xi[i];
		Sum_Yi += Yi[i];
		Sum_Xi_2 += Xi_2[i];
	}

	double coef_lin_sys[2][2];
	double coef_lin_sys_T[2][2];

	coef_lin_sys[0][0] = Sum_Xi_2;
	coef_lin_sys[0][1] = Sum_Xi;
	coef_lin_sys[1][0] = Sum_Xi;
	coef_lin_sys[1][1] = 8;

	//Transpon
	double op = (coef_lin_sys[0][0] * coef_lin_sys[1][1]) - (coef_lin_sys[0][1] * coef_lin_sys[1][0]);
	coef_lin_sys_T[0][0] = coef_lin_sys[1][1];
	coef_lin_sys_T[0][1] = -(coef_lin_sys[0][1]);
	coef_lin_sys_T[1][0] = -(coef_lin_sys[1][0]);
	coef_lin_sys_T[1][1] = coef_lin_sys[0][0];
	
	coef_lin_sys_T[0][0] = coef_lin_sys_T[0][0] / op;
	coef_lin_sys_T[0][1] = coef_lin_sys_T[0][1] / op;
	coef_lin_sys_T[1][0] = coef_lin_sys_T[1][0] / op;
	coef_lin_sys_T[1][1] = coef_lin_sys_T[1][1] / op;

	//free members
	free_members[0] = Sum_Xi_Yi;
	free_members[1] = Sum_Yi;

	//polynomial coef
	polynomial_coef[0] = coef_lin_sys_T[0][0] * free_members[0] + (coef_lin_sys_T[0][1] * free_members[1]);
	polynomial_coef[1] = coef_lin_sys_T[1][0] * free_members[0] + (coef_lin_sys_T[1][1] * free_members[1]);

	for (int i = 0; i < 8; i++)
	{
		Yi_vich[i] = (polynomial_coef[0] * Xi[i]) + polynomial_coef[1];
		DYi[i] = Yi[i] - Yi_vich[i];
		DYi_2[i] = pow(DYi[i], 2);


	}
	for (int i = 0; i < 8; i++)
	{
		Sum_Yi_vich += Yi_vich[i];
		Sum_DYi_2 += DYi_2[i];
	}

	cout << "Xi" << setw(14) << "Yi" << setw(14) << "Xi^2" << setw(14) << "Xi * Yi" << setw(14) << "Yi_vich" << setw(14) << "Dyi" << setw(14) << "Dyi^2"  << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << Xi[i] << setw(14) << Yi[i] << setw(14) << Xi_2[i] << setw(14) << Xi_Yi[i] << setw(14) << Yi_vich[i] << setw(14) << DYi[i]  << setw(14) << DYi_2 << endl;
	}


	cout << Sum_Xi << setw(14) << Sum_Yi << setw(14) << Sum_Xi_2 << setw(14) << Sum_Xi_Yi << setw(14) << "                    " << "Невязка:" << setw(14);
	cout << Sum_DYi_2 << endl;
	cout << endl;
	cout << setw(14) << "Матрица коэффицентов линейной системы" << "           " << "Свободные члены" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(14) << coef_lin_sys[i][j] << " ";
		}
		cout << setw(26) << free_members[i];
		cout << endl;
	}
	cout << endl;

	cout << setw(14) << "Обратная матрица" << "                                " << "Коэфиценты полинома" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(14) << coef_lin_sys_T[i][j] << " ";
		}
		cout << setw(26) << polynomial_coef[i];
		cout << endl;
	}

}
