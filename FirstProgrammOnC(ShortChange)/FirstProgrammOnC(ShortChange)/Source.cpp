#include <stdio.h>
#include <locale.h>
#include <Windows.h>
void main()
{
	setlocale(0, "Rus");
	int summa, r50, o50, r10, o10, r5, o5, r1;
	printf("������� ����������� ����� ����� ");
	scanf_s("%i", &summa);

	r50 = summa / 50;
	o50 = summa % 50;
	r10 = o50 / 10;
	o10 = o50 % 10;
	r5 = o10 / 5;
	o5 = o10 % 5;
	r1 = o5;

	printf("����� ���� %i ������ �����, �����������: \n", summa);
	printf("%i �������� ������������ 50 ������ \n", r50);
	printf("%i �������� ������������ 10 ������ \n", r10);
	printf("%i ������ ������������ 5 ������ \n", r5);
	printf("%i ������ ������������ 1 ����� \n", r1);

	
	system("pause");
}