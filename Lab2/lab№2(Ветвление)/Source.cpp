#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(void)
{
	setlocale(0, "Rus");
	int a, n, e;
	printf("������� ����� �������� : ");
	scanf_s("%i", &a);
	if (a > 0 && a < 24)
	{
		if (a == 1)
		{
			printf("������� ������ ������� : ");
			scanf_s("%i", &n);
			e = n % 10;
			
			if ((e == 0) || (e > 4 && e <= 9))
			{
				printf("������� ��������: %i ��� \n", n);
			}
			else if (e == 1)
			{
				printf("������� ��������: %i ��� \n", n);
			}
			else if (e > 1 && e < 5)
			{
				printf("������� ��������: %i ���� \n", n);
			}
			else 
			{
				printf("�� ����� �������� ������!");
			}
		}

	}
	else
	{
		printf("������ �������� �� ����������!\n");
	}



	system("pause");
}