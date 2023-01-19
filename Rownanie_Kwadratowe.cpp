#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int a, b, c;
	double x1, x2, x0;
	double delta;

	cout << "Podaj wartości w kolejności: a, b, c\n"; cin >> a >> b >> c;
	cout << "Podano wartości:\n a = " << a << "\n b = " << b << "\n c = " << c;

	if (a != 0)
	{
		delta = pow(b, 2) - (4 * a * c);

		if (delta > 0)
		{
			x1 = (-b - sqrt(delta)) / (2.0 * a);
			x2 = (-b + sqrt(delta)) / (2.0 * a);

			cout << "\n\n\tDwa rozwiązania: \t x1 = " << x1 << ", x2 = " << x2 << "\n";
		}
		else if (delta == 0)
		{
			x1 = (-b) / (2.0 * a);

			cout << "\n\n\tJedno rozwiązanie: \t x1 = x2 = " << x1 << "\n";
		}
		else
		{
			cout << "\n\n\tBrak rozwiązań: \t x:{}\n";
		}
	}

	if (a == 0)
	{
		if (b != 0)
		{
			x0 = (-c) / b;
			cout << "\n\n\tJedno rozwiązanie: \t x0: " << x0 << "\n";
		}
		else if (b == 0 && c != 0)
		{
			cout << "\n\n\tBrak rozwiązań: \t x:{}\n";
			return 1;
		}
		else
		{
			cout << "\n\n\t Nieskończenie wiele rozwiązań: \t x:R\n";
			return 1;
		}
	}

}