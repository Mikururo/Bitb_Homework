#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 14;
	int array[SIZE][SIZE], array1[SIZE][SIZE] = { 0 }, array2[SIZE][SIZE] = { 0 }, array3[SIZE][SIZE] = { 0 };
	int max = 12, min = -12, minChislo = 0;
	int MinChislaInArray[SIZE] = { 0 }, ReverseDiagonale[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = (min + rand() % (max - min));
		}
	}
	return 0;
}