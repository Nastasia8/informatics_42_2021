#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    double Xi[8] = { 2.1, 2.30, 2.5, 2.7, 2.9, 3.1, 3.3, 3.5 };
    double Yi[8] = { 1.752, 1.762, 1.777, 1.797, 1.821, 1.850, 1.884, 1.944 };
    double free_members[3];
    double matr_coef_line_sys[3][3];
    double matr_coef_line_sys_T[3][3];
    double matr_coef_line_sys_obr[3][3];
    double matr_coef_line_sys_op = 0;
    double Sum_X = 0;
    double Sum_Y = 0;
    double Sum_X_2 = 0;
    double Sum_X_3 = 0;
    double Sum_X_4 = 0;
    double Sum_X_Y = 0;
    double Sum_X_2_Y = 0;
    double a = 0;
    double b = 0;
    double c = 0;
    double Discrepancy = 0;
    
    cout << "Xi" << setw(14) << "Yi" << endl;
    for (int i = 0; i < 8; i++)
    {
        Sum_X += Xi[i];
        Sum_Y += Yi[i];
        Sum_X_2 += pow(Xi[i], 2);
        Sum_X_3 += pow(Xi[i], 3);
        Sum_X_4 += pow(Xi[i], 4);
        Sum_X_Y += Xi[i] * Yi[i];
        Sum_X_2_Y += pow(Xi[i], 2) * Yi[i];
        cout << Xi[i] << setw(14) << Yi[i] << endl;
    }

    matr_coef_line_sys[0][0] = Sum_X_4;
    matr_coef_line_sys[0][1] = Sum_X_3;
    matr_coef_line_sys[0][2] = Sum_X_2;
    matr_coef_line_sys[1][0] = Sum_X_3;
    matr_coef_line_sys[1][1] = Sum_X_2;
    matr_coef_line_sys[1][2] = Sum_X;
    matr_coef_line_sys[2][0] = Sum_X_2;
    matr_coef_line_sys[2][1] = Sum_X;
    matr_coef_line_sys[2][2] = 8;

    free_members[0] = Sum_X_2_Y;
    free_members[1] = Sum_X_Y;
    free_members[2] = Sum_Y;

    matr_coef_line_sys_op = ((matr_coef_line_sys[0][0] * matr_coef_line_sys[1][1] * matr_coef_line_sys[2][2]) + (matr_coef_line_sys[1][0] * matr_coef_line_sys[2][1] * matr_coef_line_sys[0][2]) + (matr_coef_line_sys[0][1] * matr_coef_line_sys[1][2] * matr_coef_line_sys[2][0])) - ((matr_coef_line_sys[0][2] * matr_coef_line_sys[1][1] * matr_coef_line_sys[2][0]) + (matr_coef_line_sys[0][0] * matr_coef_line_sys[1][2] * matr_coef_line_sys[2][1]) + (matr_coef_line_sys[2][2] * matr_coef_line_sys[0][1] * matr_coef_line_sys[1][0]));
        
    matr_coef_line_sys_T[0][0] = ((matr_coef_line_sys[1][1] * matr_coef_line_sys[2][2]) - (matr_coef_line_sys[1][2] * matr_coef_line_sys[2][1]));
    matr_coef_line_sys_T[0][1] = -((matr_coef_line_sys[1][0] * matr_coef_line_sys[2][2]) - (matr_coef_line_sys[1][2] * matr_coef_line_sys[2][0]));
    matr_coef_line_sys_T[0][2] = ((matr_coef_line_sys[1][0] * matr_coef_line_sys[2][1]) - (matr_coef_line_sys[1][1] * matr_coef_line_sys[2][0]));
   
    matr_coef_line_sys_T[1][0] = -((matr_coef_line_sys[0][1] * matr_coef_line_sys[2][2]) - (matr_coef_line_sys[0][2] * matr_coef_line_sys[2][1]));
    matr_coef_line_sys_T[1][1] = ((matr_coef_line_sys[0][0] * matr_coef_line_sys[2][2]) - (matr_coef_line_sys[0][2] * matr_coef_line_sys[2][0]));
    matr_coef_line_sys_T[1][2] = -((matr_coef_line_sys[0][0] * matr_coef_line_sys[2][1]) - (matr_coef_line_sys[0][1] * matr_coef_line_sys[2][0]));
    
    matr_coef_line_sys_T[2][0] = -((matr_coef_line_sys[0][2] * matr_coef_line_sys[1][1]) - (matr_coef_line_sys[0][1] * matr_coef_line_sys[1][2]));
    matr_coef_line_sys_T[2][1] = ((matr_coef_line_sys[0][2] * matr_coef_line_sys[1][0]) - (matr_coef_line_sys[0][0] * matr_coef_line_sys[1][2]));
    matr_coef_line_sys_T[2][2] = ((matr_coef_line_sys[0][0] * matr_coef_line_sys[1][1]) - (matr_coef_line_sys[0][1] * matr_coef_line_sys[1][0]));

    for (int i  = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matr_coef_line_sys_obr[i][j] = matr_coef_line_sys_T[i][j] / matr_coef_line_sys_op;
        }
    }

    a = (matr_coef_line_sys_obr[0][0] * free_members[0] + matr_coef_line_sys_obr[0][1] * free_members[1] + matr_coef_line_sys_obr[0][2] * free_members[2]);
    b = (matr_coef_line_sys_obr[1][0] * free_members[0] + matr_coef_line_sys_obr[1][1] * free_members[1] + matr_coef_line_sys_obr[1][2] * free_members[2]);
    c = (matr_coef_line_sys_obr[2][0] * free_members[0] + matr_coef_line_sys_obr[2][1] * free_members[1] + matr_coef_line_sys_obr[2][2] * free_members[2]);

    for (int i = 0; i < 8; i++)
    {
        Discrepancy += pow(Yi[i] - (a * pow(Xi[i], 2) + b * Xi[i] + c), 2);
    }
    
    cout << "Discrepancy:= " << Discrepancy;
}
