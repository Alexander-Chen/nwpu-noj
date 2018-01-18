#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
	using std::cout;
	using namespace std;
	using std::setprecision;
	double pi;
	double s = 0;
	double a = 1;
	double b = 1;
	//cout << pow(10, -6)<<endl;
	while ((1/b)>=pow(10,-6))
	{
		s = s + a / b; 
		a = -1 * a;
		b = b + 2;

	};
	pi = 4 * s;
	cout << setiosflags(ios::fixed) << setprecision(6) << pi;
	//printf("%.6lf",pi);
}