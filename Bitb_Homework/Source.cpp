#include <iostream>
using namespace std;

void Vivod_Array(int array[][14], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}
}
void Same_Array(int SIZE, int array[][14], int array1[][14])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array1[i][j] = array[i][j];
		}
	}
}
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