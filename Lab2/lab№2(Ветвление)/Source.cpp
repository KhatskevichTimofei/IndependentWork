#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(void)
{
	setlocale(0, "Rus");
	int a, n, e;
	printf("Введите номер варианта : ");
	scanf_s("%i", &a);
	if (a > 0 && a < 24)
	{
		if (a == 1)
		{
			printf("Введите полный возраст : ");
			scanf_s("%i", &n);
			e = n % 10;
			
			if ((e == 0) || (e > 4 && e <= 9))
			{
				printf("Возраст человека: %i лет \n", n);
			}
			else if (e == 1)
			{
				printf("Возраст человека: %i год \n", n);
			}
			else if (e > 1 && e < 5)
			{
				printf("Возраст человека: %i года \n", n);
			}
			else 
			{
				printf("Вы ввели неверные данные!");
			}
		}

	}
	else
	{
		printf("Такого варианта не существует!\n");
	}



	system("pause");
}