#include <iostream>
#include <math.h>
using namespace std;
double naFahrenheity(double);
int main()
{
	 double Celcjusze;
	 cin >> Celcjusze;
	 cout << naFahrenheity(Celcjusze);
}

double naFahrenheity(double n)
{
	double Fahrenheit = 1.8;
	return Fahrenheit * n + 32;
}
