using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, k, j;
	cout << "Введите трехзначное число: ";
	cin >> A;
	k = A % 100 * 10;
	j = int(A / 100);
	B = k + j;
	cout << "Число А после перестановки: " << B;
}