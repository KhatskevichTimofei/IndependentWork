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
	srand(time(NULL)); //rand �������� �� �������
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
		printf("������������ ����� � ������� %i\n", max);
	}
	else
	{
		printf("������������� ����� ���");
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
		printf("� ���� ������� ��� �������������� �����\n");
	}
	else
	{
		printf("����������� ������������� ����� �������: %i\n", min);
		for (i = 0; i < N; i++)
		{
			if (min == minpol[i])
			{
				q += 1;
			}
		}
	}
	printf("� ������� ���������� ������������� ����� : %i\n", q);
	system("pause");

}