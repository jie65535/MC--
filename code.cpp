#include <iostream>
#include <cmath>
using namespace std;

void intersect(double x1, double z1, double f1,
				double x2, double z2, double f2,
				double &x, double &z)
{
	const double pi = 3.14159265358;
	double k1 = tan((f1*-1/360)*(2*pi));
	double b1 = (x1*-1*k1)+z1;
	double k2 = tan((f2*-1/360)*(2*pi));
	double b2 = (x2*-1*k2)+z2;
	z = (b2+b1*-1)/(k1+k2*-1);
	x = k1 * z + b1;
}

int main(){
    double x1 = 0.0, z1 = 0.0, f1 = 0.0;
    double x2 = 0.0, z2 = 0.0, f2 = 0.0;
    double x = 0.0, z = 0.0;
	cout << "x1 = ";
	cin >> x1;
	cout << "z1 = ";
	cin >> z1;
	cout << "f1 = ";
	cin >> f1;
	cout << "x2 = ";
	cin >> x2;
	cout << "z2 = ";
	cin >> z2;
	cout << "f2 = ";
	cin >> f2;
	intersect(x1, z1, f1, x2, z2, f2, x, z);
	cout << "(x, z) = (" << x << ", " << z << ")" << endl;
	return 0;
}