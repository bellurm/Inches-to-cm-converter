#include <iostream>
#include <clocale>
using namespace std;

double Inch_den_cm_ye();

int main()
{
	setlocale(LC_ALL, "Turkish");
	double x = Inch_den_cm_ye();
	cout << x << " cm'dir ";
	return 0;
}

double Inch_den_cm_ye()
{
	double aa;
	cout << "Inch deðerini gir: ";
	cin >> aa;
	return aa * 2.54; 
}
