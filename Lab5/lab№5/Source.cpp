#include <stdio.h>
#include <Windows.h>
#include <locale.h>



const int N = 10;
void main()
{
	setlocale(0, "Rus");


	char a[N] = { 31, 42, 321, 231, -32, 10, 203, 410, 123, 1 };
	char* el = a;
	int i = 0, o;
	o = sizeof(char);
	printf("%i\n", o);


	for (; i < N; el++, i++)
	{
		
		printf("������� ������� ��� ������� a[%i] ����� �������� %i\n", i, *el);
		printf("��������� %i ����� ����� %i\n", *el, &a[i]);	
	}
			
	system("pause");
}