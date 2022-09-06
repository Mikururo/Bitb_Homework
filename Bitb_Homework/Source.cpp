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
	Same_Array(SIZE, array, array1);
	Same_Array(SIZE, array, array2);
	Same_Array(SIZE, array, array3);
	cout << "Массив, заполненный случайными числами в диапазоне от - 12 до 12.\n\n";
	Vivod_Array(array, SIZE);
	////////////////////////////////////////////////////////////////////////
	cout << "\nа) Каждую строку разделить на минимальный элемент в строке.\n";
	int Kostil = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (MinChislaInArray[Kostil] > array1[i][j])
			{
				MinChislaInArray[Kostil] = array1[i][j];
			}
		}
		Kostil++;
	}

	cout << "Вывод массива с мин числами в строчках" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << MinChislaInArray[i] << " ";
	}
	Kostil = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array1[i][j] /= MinChislaInArray[Kostil];
		}
		Kostil++;
	}

	cout << "\n\nНовая матрица А" << endl;
	Vivod_Array(array1, SIZE);

	///////////////////////////////////////////////////////////////////////////////////////
	return 0;
}