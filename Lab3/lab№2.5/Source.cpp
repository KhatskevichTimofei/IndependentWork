#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include "const.h"

void main()
{
	setlocale(0, "Rus");
	int minute, seconds, t, maxsec;
	float N;
	float u = 0.1;
	maxsec = 60;
	printf("������� ����� �������� � ������ \n");
	scanf_s("%f", &N);
	t = N / u;

	min = t / 100;
	sec = t % 100;
	if (sec > 60)
	{
		min = min + 1;
		sec = sec - maxsec;
	}
	if (sec == 0)
	{
		printf("������� ������� �� �������� ����� %i ����� \n", min);
	}
	else 
	{
		printf("������� ������� �� �������� ����� %i ����� � %i ������\n", min, sec);
	}
	system("pause");
     
}
