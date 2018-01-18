#include<iostream>
char estimate(int score);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int score;
	cin >> score;
	cout << estimate(score);
	return 0;
}
char estimate(int score)
{
	if (score <= 100 && score >= 90)
		return 'A';
	else if (score >= 80 && score <= 89)
		return 'B';
	else if (score >= 70 && score <= 79)
		return 'C';
	else if (score >= 60 && score <= 69)
		return 'D';
	else if (score < 60)
		return  'E';

}