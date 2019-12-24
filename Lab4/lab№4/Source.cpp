#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <ctime>
const int N = 10;
int minpol[N] = {};

int main(void)
{
	setlocale(0, "Rus");
	int max = 0, min = 0, q = 0, i;
	srand(time(NULL)); //rand работает от времени
	for (i = 0; i < N; i++)
	{
		minpol[i] = rand();
	}
	for (i = 0; i < N; i++)
	{
		if (max < minpol[i])
		{
			max = minpol[i];
		}
	}
	if (max != 0)
	{
		printf("ћаксимальное число в массиве %i\n", max);
	}
	else
	{
		printf("ѕоложительных чисел нет");
	}
	min = max;
	for (i = 0; i < 10; i++)
	{
		if (min >  minpol[i] && minpol[i] > 0)
		{
			min = minpol[i];
		}
		
	}
	if (min == 0)
	{
		printf("¬ этом массиве нет положительного числа\n");
	}
	else
	{
		printf("ћинимальное положительное число массива: %i\n", min);
		for (i = 0; i < N; i++)
		{
			if (min == minpol[i])
			{
				q += 1;
			}
		}
	}
	printf("¬ массиве минимально положительных чисел : %i\n", q);
	system("pause");

}