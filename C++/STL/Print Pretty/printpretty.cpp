#include <iostream>
#include <iomanip>

using namespace std;

void printScientific(double C)
{
	cout << uppercase << noshowpos << setprecision(9) << scientific << C << endl;
}

void print15char(double B)
{
	cout << right << setfill('_') << setw(15) << showpos << setprecision(2) << fixed << B << endl;
}

void printHex(double A)
{
	cout << nouppercase << setw(0) << showbase << hex << long(A) << endl;
}

int main()
{
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;

	while(T--)
	{
		double A;
		cin >> A;

		double B;
		cin >> B;

		double C;
		cin >> C;

		printHex(A);
		print15char(B);
		printScientific(C);
	}

	return 0;
}
