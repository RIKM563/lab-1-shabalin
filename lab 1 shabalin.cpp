// lab 1 shabalin.cpp : Определяет точку входа для приложения.
//

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	cout << "1 13 49\n";//Task 1
	cout << "1,13,49\n";//Task 2
	double u, i, o;
	cout << "Vvedite 3 chisla" << endl;
	cin >> u;
	cin >> i;
	cin >> o;
	cout << u << "  " << i << "  " << o << endl;//Task 3
	int a;
	cout << "Vvedite chislo a" << endl;
	cin >> a;
	int x4 = 12 * pow(a, 2) + 7 * a - 12;
	cout << x4 << endl;//Task 4
	int x5;
	cout << "Vvedite chislo x5" << endl;
	cin >> x5;
	int y = 3 * pow(x5, 3) + 4 * pow(x5, 2) - 11 * x5 + 1;
	cout << y << endl;//Task 5
	double v, m;
	cout << "Vvedite massy i ob'em tela" << endl;
	cin >> v;
	cin >> m;
	double r = m / v;
	cout << r << endl;//Task 6
	double a1, b1;
	cout << "Vvedite chisla a1,b1" << endl;
	cin >> a1;
	cin >> b1;
	if (a1 == 0) {
		cout << "Operacia nevozmozhna" << endl;
	}
	else {
		double x = -b1 / a1;
		cout << x << endl;
	}//Task 7
	double x8, y8, z8, g8;
	cout << "Vvedite koordinaty A(x8,y8),B(z8,g8)" << endl;
	cin >> x8;
	cin >> y8;
	cin >> z8;
	cin >> g8;
	double l = (z8 - x8) * (z8 - x8) + (g8 - y8) * (g8 - y8);
	double l1 = sqrt(l);
	cout << l1 << endl;//Task 8
	double e, f, h;
	cout << "Vvedite 2 osnovania and visotu" << endl;
	cin >> e;
	cin >> f;
	cin >> h;
	double p = 2 * sqrt(((e - f) / 2) * ((e - f) / 2) + h * h) + e + f;
	cout << p << endl;//Task 9
	double P, r1, R1;
	P = 3, 14;
	cout << "Vvedite radiusi r1 and R1" << endl;
	cin >> r1;
	cin >> R1;
	double S = P * (R1 * R1 - r1 * r1);
	cout << S << endl;//Task 10
	int a11;
	cout << "Vvedite storony a11" << endl;
	cin >> a11;
	int S11 = 6 * pow(a11, 2);
	int V = pow(a11, 3);
	cout << "Ob'yom=" << V << " " << "Ploshad'=" << S11 << endl;//Task 11
	int a12;
	cout << "Vvedite storonu kvadrata a12" << endl;
	cin >> a12;
	int P12 = 4 * a12;
	cout << "Perimetr=" << P12 << endl;//Task 12
	int r13;
	cout << "Vvedite radius r13" << endl;
	cin >> r13;
	int d13 = 2 * r13;
	cout << "Diametr=" << d13 << endl;//Task 13
	char name[8];
	cout << "Vvedite svoe imya + ;" << endl;
	cin.getline(name, 8, ';');
	cout << "Hello, " << name << " ! My name is c++." << endl;//Task 14
	char slovo[7];
	cout << "Vvedite slovo iz 7 bukv + ;" << endl;
	cin.getline(slovo, 7, ';');
	for (int f = 0; f < 7; f++);
	{
		if (slovo[0] != slovo[6])
		{
			return false;
			cout << "Sorry,this is not polindrom!" << endl;
		}
		else if (slovo[1] != slovo[5])
		{
			return false;
			cout << "Sorry,this is not polindrom!" << endl;
		}
		else if (slovo[2] != slovo[4])
		{
			return false;
			cout << "Sorry,this is not polindrom!" << endl;
		}
		else cout << "This is polindrom!" << endl;
	}





	system("pause");
	return 0;

}