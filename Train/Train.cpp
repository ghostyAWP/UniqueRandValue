#include <iostream>
#include <ctime>
using namespace std;

//заполнение массива уникальными случайными числами;

int main()
{
	setlocale(LC_ALL, "Ru");
	const int SIZE = 10;
	int arr[SIZE]{};
	bool alreadyThere;
	srand(time(NULL)); 

	for (int i = 0; i < SIZE;)/*тут генерируется массив уникальных случайных чисел*/
	{
		alreadyThere = false;
		int NewRandomValue = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == NewRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere)
		{
			arr[i] = NewRandomValue;
			i++;
		}

	}

	for (int i = 0; i < SIZE; i++)
		cout << arr[i] << " ";

}
	