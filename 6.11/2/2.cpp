#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x1,x2,x3,x4,y1,y2,y3,y4,a12[2],a13[2],a23[2];
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a12[0] = x1 - x2;a12[1] = y1 - y2;
	a13[0] = x1 - x3; a13[1] = y1 - y3;
	a23[0] = x2 - x3;a23[1] = y2 - y3;
	// вектор 12 и вектор 13, начало в точке 1
	if ((a12[0] * a13[0] + a12[1] * a13[1]==0) and (sqrt(pow(a12[0],2)+pow(a12[1],2))== sqrt(pow(a13[0], 2) + pow(a13[1], 2)))) {
		x4 = -1 * (a12[0] + a13[0] - x1);
		y4 = -1 * (a12[1] + a13[1] - y1);
		cout << x4 << ' ' << y4;
	}
	// вектор 12 и вектор 23, начало в точке 2
	else if ((a12[0] * a23[0] + a12[1] * a23[1] == 0) and (sqrt(pow(a12[0], 2) + pow(a12[1], 2)) == sqrt(pow(a23[0], 2) + pow(a23[1], 2)))) {
		x4 = a12[0] + a23[0] + x2;
		y4 = a12[1] + a23[1] + y2;
		cout << x4 << ' ' << y4;
	}
	// вектор 13 и вектор 23, начало в точке 3
	else if ((a13[0] * a23[0] + a13[1] * a23[1] == 0) and (sqrt(pow(a13[0], 2) + pow(a13[1], 2)) == sqrt(pow(a23[0], 2) + pow(a23[1], 2)))) {
		x4 = a13[0] + a23[0] + x3;
		y4 = a13[1] + a23[1] + y3;
		cout << x4 << ' ' << y4;
	}
	else {
		cout << "This is not a square" << endl;
	}
}