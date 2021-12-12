#include "klasa.h"
sortowanie::sortowanie()
{
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		temp = rand() % 1000;
		elementy.push_back(temp);
	}
}
sortowanie::~sortowanie()
{

}

void sortowanie::losoweliczby()
{
	for (int i = 0; i < 100; i++)
	{
		cout << elementy[i] << " ";
	}
}

void sortowanie::babelkowe()
{
	for (int a = 0; a < 100; a++)
	{
		for (int i = 0; i < 100; i++)
		{
			if (i != 99)
			{
				if (elementy[i] > elementy[i + 1])
				{
					temp = elementy[i];
					temp2 = elementy[i + 1];
					elementy[i] = temp2;
					elementy[i + 1] = temp;
				}
			}
		}
	}
}

void sortowanie::wstawieniowe()
{
	int x, y;
	vector <int> temp = elementy;
	for (int j = 99; j > -1; j--)
	{
		x = temp[j];
		y = j + 1;
		while (y < 100 && x > temp[y])
		{
			temp[y - 1] = temp[y];
			y = y + 1;
		}
		temp[y - 1] = x;
	}
	elementy = temp;
}
