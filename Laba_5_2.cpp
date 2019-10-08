using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, k;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	if (A > B) {
		k = int(A / B);
		cout << "В отрезке А отрезок В может поместиться " << k << " раз";
	}
	else {
		cout << "Введены неверные значения";
	};
}