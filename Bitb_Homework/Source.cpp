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
	cout << "������, ����������� ���������� ������� � ��������� �� - 12 �� 12.\n\n";
	Vivod_Array(array, SIZE);
	////////////////////////////////////////////////////////////////////////
	cout << "\n�) ������ ������ ��������� �� ����������� ������� � ������.\n";
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

	cout << "����� ������� � ��� ������� � ��������" << endl;
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

	cout << "\n\n����� ������� �" << endl;
	Vivod_Array(array1, SIZE);

	///////////////////////////////////////////////////////////////////////////////////////
	cout << "�) �������� ������� ���������� ��������� ������� ��������� �� ��������.\n";

	Kostil = (SIZE - 1);
	for (int i = 0; i < SIZE; i++)
	{
		ReverseDiagonale[Kostil] = array2[i][i];
		Kostil--;
	}
	Kostil = 0;
	for (int i = 0; i < SIZE; i++)
	{
		array2[i][i] = ReverseDiagonale[Kostil];
		Kostil++;
	}
	cout << "\n\n����� ������� �" << endl;
	Vivod_Array(array2, SIZE);
	/////////////////////////////////////////////////////////////////////////////////////

	cout << "\n�) ������� ����������� ������� ����� ������������� ��������� �������, ���������� ������ ������ (������� ����������).\n";
	minChislo = array3[0][0];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if ((i + j >= SIZE - 1) && (i >= j) && (minChislo > array3[i][j]) && (array3[i][j] > 0))
			{
				minChislo = array3[i][j];
			}
		}
	}

	cout << "����������� ����� ��������� " << minChislo << endl;
	return 0;
}