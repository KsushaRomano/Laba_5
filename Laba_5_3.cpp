using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, k, o;
	cout << "Введите значение A: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	if (A > B) {
		k = int(A / B);
		o = A - B * k;
		cout << "Длина незанятой части отрезка А равна  " << o ;
	}
	else {
		cout << "Введены неверные значения";
	};
}