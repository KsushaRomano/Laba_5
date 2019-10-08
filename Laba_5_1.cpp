using namespace std;
#include <math.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double b, kb;
	cout << "Введите количество байтов: ";
	cin >> b;
	kb = int(b / pow(2, 10));
	cout << "В данном количестве байтов целое количество килобайтов равно: "<< kb;
}