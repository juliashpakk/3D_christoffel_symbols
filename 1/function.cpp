#include <iostream>
#include <windows.h>
#include <math.h>
#include "Header.h"

using namespace std;

void input1() {
	cout << '\t' << "Введите структурные константы: a1, a2, a3, a4, a5, a6, a7, a8, a9" << endl;
	cout << "[E2,E3] = a1 E1 + a2 E2 + a3 E3" << endl;
	cout << "[E3,E1] = a4 E1 + a5 E2 + a6 E3" << endl;
	cout << "[E1,E2] = a7 E1 + a8 E2 + a9 E3" << endl;
	cout << endl;
}

void input2() {
	cout << '\t' << "Введите матрицу Г скалярного произведения" << endl;
	cout << endl;
	cout << "     b11  b12  b13" << endl;
	cout << " Г = b21  b22  b23" << endl;
	cout << "     b31  b32  b33" << endl;
	cout << endl;
}

double det(double b[3][3]) {
	double a = b[0][0] * b[1][1] * b[2][2] + b[2][0] * b[0][1] * b[1][2] + b[0][1] * b[1][0] * b[2][1] - b[0][2] * b[1][1] * b[2][0] - b[2][2] * b[1][0] * b[0][1] - b[0][0] * b[1][2] * b[2][1];
	return a;
}

double* matr(double b[3][3], double a) {
	double* mass = new double[9];
	mass[0] = (b[1][1] * b[2][2] - b[1][2] * b[2][1]) / a;
	mass[1] = (b[0][1] * b[2][2] - b[2][1] * b[0][2]) / a;
	if (mass[1] != 0)
		mass[1] = mass[1] * (-1);
	mass[2] = (b[0][1] * b[1][2] - b[1][1] * b[0][2]) / a;
	mass[3] = (b[1][0] * b[2][2] - b[2][0] * b[1][2]) / a;
	if (mass[3] != 0)
		mass[3] = mass[3] * (-1);
	mass[4] = (b[0][0] * b[2][2] - b[0][2] * b[2][0]) / a;
	mass[5] = (b[0][0] * b[1][2] - b[1][0] * b[0][2]) / a;
	if (mass[5] != 0)
		mass[5] = mass[5] * (-1);
	mass[6] = (b[1][0] * b[2][1] - b[1][1] * b[2][0]) / a;
	mass[7] = (b[0][0] * b[2][1] - b[2][0] * b[0][1]) / a;
	if (mass[7] != 0)
		mass[7] = mass[7] * (-1);
	mass[8] = (b[0][0] * b[1][1] - b[1][0] * b[0][1]) / a;
	return mass;
}

void input3(double b[3][3]) {
	double m = 3;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "b" << i + 1 << j + 1 << "=" << b[i][j] << " ";
		}
		cout << endl;
	}
}

void input4(double b[3][3], double bb[3][3]) {
	cout << "Матрица Г" << endl;
	cout << "     " << b[0][0] << "  " << b[0][1] << "  " << b[0][2] << endl;
	cout << " Г = " << b[1][0] << "  " << b[1][1] << "  " << b[1][2] << endl;
	cout << "     " << b[2][0] << "  " << b[2][1] << "  " << b[2][2] << endl;
	cout << endl;
	cout << "Матрица Г^(-1)" << endl;
	cout << "          " << bb[0][0] << "  " << bb[0][1] << "  " << bb[0][2] << endl;
	cout << " Г^(-1) = " << bb[1][0] << "  " << bb[1][1] << "  " << bb[1][2] << endl;
	cout << "          " << bb[2][0] << "  " << bb[2][1] << "  " << bb[2][2] << endl;
}

void Christoffel(double c1[3][3], double c2[3][3], double c3[3][3], double g[3][3]) {
	double* sk1 = new double[3];
	double* sk2 = new double[3];
	double* sk3 = new double[3];

	cout << '\t' << "Символы Кристофеля первого рода" << endl;

}