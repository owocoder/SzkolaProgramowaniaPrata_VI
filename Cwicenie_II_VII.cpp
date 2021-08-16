#include <iostream>
using namespace std;

void pokazCzas(int, int);
int main()
{
	cout << "Podaj godzine: ";
	int godziny;
	cin >> godziny;
	
	cout << endl;

	cout << "Podaj minuty: ";
	int minuty;
	cin >> minuty;
	pokazCzas(godziny, minuty);
}

void pokazCzas(int godziny, int minuty)
{
	cout << "Czas: " << godziny << ":" << minuty; 
}
