#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double math, english, c_prog,sum,ava;
	cin >> math >> english >>c_prog;
	sum = math + english + c_prog;
	ava = sum / 3;
	cout << setiosflags(ios::fixed) << setprecision(6) << sum<<"\n";
	cout << ava;
	return 0;
}