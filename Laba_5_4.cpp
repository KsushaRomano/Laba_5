using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, a, b;
	cout << "Введите двузначное число: ";
	cin >> A;
	a = int(A / 10);
	b = A % 10 * 10;
	B = a + b;
	cout << "Число А с перестановкой: " << B;
}