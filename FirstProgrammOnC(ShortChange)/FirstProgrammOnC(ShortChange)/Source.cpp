#include <stdio.h>
#include <locale.h>
#include <Windows.h>
void main()
{
	setlocale(0, "Rus");
	int summa, r50, o50, r10, o10, r5, o5, r1;
	printf("Введите необходимую сумму сдачи ");
	scanf_s("%i", &summa);

	r50 = summa / 50;
	o50 = summa % 50;
	r10 = o50 / 10;
	o10 = o50 % 10;
	r5 = o10 / 5;
	o5 = o10 % 5;
	r1 = o5;

	printf("Чтобы дать %i рублей сдачи, используйте: \n", summa);
	printf("%i банкноты достоинством 50 рублей \n", r50);
	printf("%i банкноты достоинством 10 рублей \n", r10);
	printf("%i монеты достоинством 5 рублей \n", r5);
	printf("%i монеты достоинством 1 рубль \n", r1);

	
	system("pause");
}