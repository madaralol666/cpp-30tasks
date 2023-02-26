#include <iostream>
#include "MathEx.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	MathEx mathex;
	cout << "Введите цифру задания: ";
	int num;
	double a, b, c;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.R(a,b) << endl;
	case 2:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.K(a, b) << endl;
	case 3:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.G(a, b) << endl;
	case 4:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.D(a, b) << endl;
	case 5:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.L(a, b) << endl;
	case 6:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.M(a, b) << endl;
	case 7:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N(a) << endl;
	case 8:
		cout << "1 значение: " && cin >> a;
		cout << mathex.T(a) << endl;
	case 9:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.V(a, b) << endl;
	case 10:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.U(a, b, c) << endl;
	case 11:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.S(a, b) << endl;
	case 12:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.K1(a, b) << endl;
	case 13:
		cout << "1 значение: " && cin >> a;
		cout << mathex.E(a) << endl;
	case 14:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.M1(a, b) << endl;
	case 15:
		cout << "1 значение: " && cin >> a;
		cout << mathex.H(a) << endl;
	case 16:
		cout << "1 значение: " && cin >> a;
		cout << mathex.S1(a) << endl;
	case 17:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N1(a) << endl;
	case 18:
		cout << "1 значение: " && cin >> a;
		cout << mathex.Z(a) << endl;
	case 19:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.N2(a, b, c) << endl;
	case 20:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.U1(a, b, c) << endl;
	case 21:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P(a, b) << endl;
	case 22:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.T(a, b, c) << endl;
	case 23:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P1(a, b) << endl;
	case 24:
		cout << "1 значение: " && cin >> a;
		cout << mathex.F(a) << endl;
	case 25:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.P2(a, b) << endl;
	case 26:
		cout << "1 значение: " && cin >> a;
		cout << mathex.Z1(a) << endl;
	case 27:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << "3 значение: " && cin >> c;
		cout << mathex.W(a, b, c) << endl;
	case 28:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.T1(a, b) << endl;
	case 29:
		cout << "1 значение: " && cin >> a;
		cout << mathex.N3(a) << endl;
	case 30:
		cout << "1 значение: " && cin >> a;
		cout << "2 значение: " && cin >> b;
		cout << mathex.W1(a, b) << endl;
	default:
		break;
	}
}

