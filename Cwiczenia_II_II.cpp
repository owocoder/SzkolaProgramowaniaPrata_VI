//Strona 77 cwiczenie 2
#include <iostream>
using namespace std;
int zamienMila(int);
int main()
{

	std::cout << "Podaj Mile morskie!" << endl;
	int MilaMorska;
	cin >> MilaMorska;
	cout << zamienMila(MilaMorska);

}
int zamienMila(int n)
{
	return n * 1852;
}
