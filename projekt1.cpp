#include <iostream>
using namespace std;

unsigned int factorial(int a)
{
	if(a < 0)
	{
		return -1;
	}

	int result = 1;
	for(int i = 1; i <= a; i++)
	{
		result *= i;
	}

return result;
}

int main() 
{
	int a, b;
	cout << "Podaj liczbe calkowita ";
	cin >> a >> b;
	int wyjscie;
	do
	{
		cout << endl;
		cout << endl;
		cout << "MENU" << endl;
		cout << "1. Silnia" << endl;
		cout << "0. Wyjscie" << endl;
		cin >> wyjscie;
		switch(wyjscie)
		{

			case 1:
				cout << "Silnia liczby " << a << " = " << factorial(a) << endl;
				cout << "Silnia liczby " << b << " = " << factorial(b) << endl;
				break;
		}
	}
	while(wyjscie != 0);

return 0;
}
