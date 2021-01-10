#include <locale.h>

#include <stdio.h>

#include <iostream>

using namespace std;

int returnWord(int mass[15]) {

	long long arr[8];

	int lastIndex = 0;

	int indexArr = 0;

	for (int i = 0; i < 15; i++) {

		if (mass[i] == 0) {

			long long number = 0;

			long long mul = 1;

			for (int j = i - 1; j >= lastIndex; j--, mul *= 10)

			{

				number += mass[j] * mul;

			}

			arr[indexArr] = number;

			lastIndex = i + 1;

			indexArr++;

		}

	}

	cout << "(";

	for (int i = 0; i < indexArr; i++)

	{

		cout << arr[i];

		if (i != indexArr - 1) {

			cout << ", ";

		}

	}

	cout << ") ";

	return 1;

}

int main()

{

	setlocale(LC_ALL, "Rus");

	int mass[4][15];

	for (int i = 0; i < 4; i++)

	{

		for (int j = 0; j < 14; j++) {

			cout << "Введите [" << i << "][" << j << "] цифру: ";

			int numEnter;

			cin >> numEnter;

			mass[i][j] = numEnter % 10;

			cout << "\n";

		}

		mass[i][14] = 0;

	}

	for (int i = 0; i < 4; i++)

	{

		returnWord(mass[i]);

	}

}