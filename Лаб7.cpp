#include  "locale.h"

#include <cmath>
#include <iostream>

using namespace std;

void FIOprint(string firstName, string lastName = "Имя", string patronymic = "Отчество") {
	string result = firstName + " ";
	if (lastName != "Имя") {
		result += lastName + " ";
	}
	if (patronymic != "Отчество") {
		result += patronymic + " ";
	}
	cout << result + "\n";
}


void minFromParams(unsigned char number, int n, ...) {
	int min = INT_MAX;
	int num;
	int* p = &n;

	while (number--) {
		if (*(p) < min)
		{
			min = *(p);
		}
		p++;
	}
	cout << "Минимальный параметр равен: " << min << "\n";
}
double avgArrey(int mass[10]) {

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += mass[i];
	}
	return ((double)sum) / 10;
}
double avgArrey(double mass[10])
{

	double sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += mass[i];

		return ((double)sum) / 10;
	}
}

double avgArrey(char mass[10])
{
	char sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += mass[i];
	}
	return ((double)sum) / 10;
}

template <typename T>
double avgTArrey(T mass[10]) {

	T sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += mass[i];
	}

	return ((double)sum) / 10;
}
double func(double x) {
	return (-3.0 * sin(sqrt(x)) + 3.8) / 0.35;
}

double calc(double (*f)(double), double a = 2, double b = 3, double e = 0.0001) {
	double x0 = a,
		x1 = b;
	while (true)
	{
		x1 = f(x0);
		if (fabs(x1 - x0) < e) break;
		x0 = x1;
	}
	return x1;
}

int main() {
	setlocale(LC_ALL, "Rus");
	FIOprint("Сыропятов", "Игорь", "Андреевич");
	FIOprint("Сыропятов");
	FIOprint("Сыропятов", "Игорь");
	minFromParams(3, 2, -51, 5);
	minFromParams(2, 35, 0);
	minFromParams(1, 56);
	double avg;
	int mass1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	double mass2[10] = { 1.562,834.23,672.26,322.623, 6236.623,2.3,55.622, 9923,25.523552355 };
	char mass3[10] = { 'f','s','h','F','q','G','в','2','9',';' };
	avg = avgArrey(mass1);
	cout << "Среднее арифметическое массива int: " << avg << "\n";
	avg = avgArrey(mass2);
	cout << "Среднее арифметическое массива double: " << avg << "\n";
	avg = avgArrey(mass3);
	cout << "Среднее арифметическое массива char: " << avg << "\n";
	avg = avgTArrey(mass1);
	cout << "Среднее арифметическое массива int: " << avg << "\n";
	avg = avgTArrey(mass2);
	cout << "Среднее арифметическое массива double: " << avg << "\n";
	avg = avgTArrey(mass3);
	cout << "Среднее арифметическое массива char: " << avg << "\n";
	cout << "Значение x = " << calc(&func);
	cout << "Исходные данные: 2.2985";
	return 0;
}
