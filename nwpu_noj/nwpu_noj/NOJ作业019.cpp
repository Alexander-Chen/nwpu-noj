/*ÍêÈ«Êı*/
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=1000;i++)
		for (int j = 1; j <= i; j++)
		{
			if (i%j == 0)
				cout << j << " ";
		}
	return 0;
}