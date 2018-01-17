#include<iostream>
#include<iomanip>
#define pi 3.1415926
using namespace std;

int main()
{
	double r, h, sq, vq, vz;
	cin >> r >> h;
	sq = 4 * pi*r*r;
	vq = (4*pi*r*r*r)/3;
	vz = pi*r*r*h;

	cout <<setiosflags(ios::fixed )<<setprecision(2)<<(2* r*pi) << endl;
	cout << (pi*r*r) << endl;
	cout << sq << endl;
	cout << vq << endl;
	cout << vz << endl;
	return 0;
}