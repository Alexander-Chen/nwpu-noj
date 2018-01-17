#include<iostream>
#include<iomanip>
using namespace std;
double reward(double p)
{
	double bonus, bon1, bon2, bon4, bon6, bon10;
	bon1 = 10 * 0.1;
	bon2 = bon1 + 10 * 0.075;
	bon4 = bon2 + 20 * 0.05;
	bon6 = bon4 + 20 * 0.03;
	bon10 = bon6 + 40 * 0.015;

	if (p <= 10)
	{
		return (p*0.1);
	}
	else if (p > 10 & p < 20)
	{
		return(bon1 + (p - 10)*0.075);
	}
	else if (p>20&p<40)
	{
		return(bon2+(p - 20)*0.05);
	}
	else if (p>40&p<60)
	{
		return(bon4+(p - 40)*0.03);
	}
	else if (p>60&p<100)
	{
		return(bon6+(p - 60)*0.015);
	}
	else if(p>100)
	{
		return (bon10+(p - 100)*0.01);
	}


}
int main()
{
	double i;
	cin >> i;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<reward(i);
}