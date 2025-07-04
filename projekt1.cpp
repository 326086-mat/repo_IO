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

bool isNumberPrime(int a)
{
	if(a <= 1)
	{
		return false;
	}

	if(a == 2) 
	{
		return true;
	}

	if(a % 2 == 0)
	{
		return false;
	}

	for(int i = 3; i * i <= a; i += 2)
	{
		if(a % i == 0)
		{
			return false;
		}
	}

return true;
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

		cout << "2. Liczba pierwsza" << endl;

		cout << "0. Wyjscie" << endl;
		cin >> wyjscie;
		switch(wyjscie)
		{
			case 1:
				cout << "Silnia liczby " << a << " = " << factorial(a) << endl;
				cout << "Silnia liczby " << b << " = " << factorial(b) << endl;
				break;

			case 2:
				if(isNumberPrime(a))
				{
					cout << a << ": TAK" << endl;
				}
				else
				{
					cout << a << ": NIE" << endl;

				}

				if(isNumberPrime(b))
				{
					cout << b << ": TAK" << endl;
				}
				else
				{
					cout << b << ": NIE" << endl;

				}

				break;
		}
	}
	while(wyjscie != 0);

return 0;
}
