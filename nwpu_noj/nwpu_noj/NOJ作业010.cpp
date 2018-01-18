#include<iostream>
#include<cmath>
#include<cstdio>
//using namespace std;

int main()
{
using std::cin;
using std::cout;
using std::endl;
	double x;
    double y;
	//cin >> x; cin.get();
		//cin>> y; cin.get();
	//cout << x <<" "<< y<<endl;
	scanf_s("%lf,%lf", &x, &y);
	double a,b,c,d;
	a = sqrt((x + 2)*(x + 2) + (y - 2)*(y - 2));
	b = sqrt(pow((x - 2), 2) + pow((x - 2), 2));
	c = sqrt(pow((x + 2), 2) + pow((x +2), 2));
	d = sqrt(pow((x - 2), 2) + pow((x + 2), 2));
	if ((a <= 1)||(b <= 1) || (c <= 1) || (d <= 1))
	cout << 10;
	else cout << 0;
	

}
