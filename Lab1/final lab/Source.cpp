#include<stdio.h>
#include<Windows.h>
#include<locale.h>
#include<math.h>
#define Pi 3.14

int var;
float a, y, z, b, g, Y, x;

int main(void)
{
	setlocale(0, "Rus");
	printf("������� ����� ��������: ");
	scanf_s("%i", &var);
	if (var > 0 && var < 21)
	{
		if (var == 1)
		{
			printf("������� 1 : ������ \n");
			printf("������� ���� �����\n");
			scanf_s("%fl", &a);

			y = (sin((Pi / 2.0) + 3.0 * a)) / 1.0 - sin(3.0 * a - Pi);
			z = (1.0 / tan(x)) * ((5.0 / 4) * Pi + (3.0 / 2) * a);

			printf("%f\n", y);
			printf("%f\n", (float)z);
			printf("������� 1 : �����\n");
		}

		else if (var == 2)
		{
			printf("������� 2 : ������\n");
			printf("������� ���� �����\n");
			scanf_s("%fl", &a);

			y = cos(a) + sin(a) + cos(3.0 * a) + sin(3.0 * a);
			z = 2.0 * sqrt(2.0) * cos(a) * sin(Pi / 4.0 + 2.0 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 2 : �����\n");
		}

		else if (var == 3)
		{
			printf("������� 3 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);

			y = (sin(2.0 * a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) + 1.0 - 2.0 * pow(sin(2 * a), 2));
			z = 2.0 * sin(a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 3 : �����\n");
		}

		else if (var == 4)
		{
			printf("������� 4 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%f", &a);

			y = (sin(2.0 * a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) - cos(3.0 * a) + cos(5.0 * a));
			z = tan(3.0 * a);

			printf("%f\n", y);
			printf("%f\n", z);
			printf("������� 4 : �����\n");
		}

		else if (var == 5)
		{
			printf("������� 5 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);

			y = 1.0 - 1.0 / 4 * pow(sin(2.0 * a), 2) + cos(2.0 * a);
			z = pow(cos(a), 2) + pow(cos(a), 4);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 5 : �����\n");
		}

		else if (var == 6)
		{
			printf("������� 6 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);

			y = cos(a) + cos(2.0 * a) + cos(6.0 * a) + cos(7.0 * a);
			z = 4.0 * cos(a / 2.0) * cos((5.0 / 2) * a) * cos(4.0 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 6 : �����\n");
		}
		
		else if (var == 7)
		{
			printf("������� 7 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);

			y = pow(cos((3.0 / 8) * Pi - (a / 4.0)), 2);
			z = (sqrt(2) / 2.0) * sin(a / 2.0);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 7 : �����\n");
		}
		
		else if (var == 8)
		{
			printf("������� 8 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);

			y = 2.0 * pow(sin(3.0 * Pi - 2.0 * a), 2) * pow(cos(5.0 * Pi + 2.0 * a), 2);
			z = (1.0 / 4) - (1 / 4.0) * sin((5.0 / 2) * Pi - 8 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 8 : �����\n");
		}

		else if (var == 9)
		{
		    printf("������� 9 : ������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);
            
			y = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b),2);
			z = -4.0 * pow((a - b) / 2.0, 2) * cos(a + b);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 9 : �����\n");

	   
        }
		
		else if (var == 10)
		{
		    printf("������� 10 : ������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);

			y = pow(cos(a), 4) + pow(sin(b), 2) + (1.0 / 4) * pow(sin(2 * a), 2) - 1.0;
			z = sin(b + a) * sin(b - a);

			printf("%fl\n", y);
		    printf("%fl\n", z);
		    printf("������� 10 : �����\n");


		}

		else if (var == 11)
		{
		    printf("������� 11 :������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);
			

			y = (1.0 - 2.0 * pow(sin(a), 2)) / (1.0 + sin(3.0 * a));
			z = (1.0 - tan(a)) / (1.0 + tan(a));

			printf("%fl\n", y);
		    printf("%fl\n", z);
		    printf("������� 11 : �����\n");


		}

		else if (var == 12)
		{
		    printf("������� 12 : ������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);

			y = (sin(4.0 * a)) / (1.0 + cos(4.0 * a)) * (cos(2.0 * a)) / (1.0 + cos(2.0 * a));
			z = (1.0 / tan((3 / 2) * Pi - a));

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("������� 12 : �����\n");
		}

		else if (var == 13)
		{
		    printf("������� 13 : ������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);

			y = (sin(a) + cos(2.0 * b - a)) / (cos(a) - sin(2 * b - a));
			z = (1 + sin(2.0 * b)) / (cos(2 * b));

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("������� 13 : �����\n");
		}

		else if (var == 14)
		{
		    printf("������� 14 : ������\n");
		    printf("������� ���� ����� \n");
		    scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);
			printf("������� ���� �����\n");
			scanf_s("%fl", &Y);

			y = 1.0 / 4 * (sin(a + b + Y) - sin(b + Y - a) + sin(Y + a - b) - sin(a + b + Y));
			z = sin(a) * cos(b) * cos(Y);

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("������� 14 : �����\n");
		}

		else if (var == 15)
		{
    		printf("������� 15 : ������\n");
    		printf("������� ���� ����� \n");
      		scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);

			y = (sqrt(2 * b + 2.0 * sqrt(pow(b, 2) - 4))) / (sqrt(pow(b, 2) - 4) + b + 2);
			z = 1.0 / sqrt(b + 2);

			printf("%fl\n", y);
	    	printf("%fl\n", z);
    		printf("������� 15 : �����\n");


		}

		else if (var == 16)
		{
    		printf("������� 16 : ������\n");
    		printf("������� ����� x \n");
    		scanf_s("%fl", &x);

			y = (pow(x, 2) + 2 * x - 3.0 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) + 2 * x - 3.0 + (x + 1) * sqrt(pow(x, 2) - 9));
			z = sqrt((x + 3) / (x - 3));

			printf("%fl\n", y);
    		printf("%fl\n", z);
			printf("������� 16 : �����\n");
		}

		else if (var == 17)
		{
			printf("������� 17 : ������\n");
			printf("������� ���� ����� \n");
			scanf_s("%fl", &a);
			printf("������� ���� ����\n");
			scanf_s("%fl", &b);
			printf("������� ���� �����\n");
			scanf_s("%fl", &Y);

			y = (1.0 / 4) * (cos(a + b + Y) + cos(b + Y - a) + cos(Y + a - b) + cos(a + b + Y));
			z = cos(a) * cos(b) * cos(Y);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("������� 17 : �����\n");
		}

		else if (var == 18)
		{
		printf("������� 18 : ������\n");
		printf("������� ���� ����� \n");
		scanf_s("%fl", &a);

		    y = (3 * tan(a) - pow(tan(a), 3)) / (1.0 - 3 * pow(tan(a), 2));
			z = tan(3 * a);

			printf("%fl\n", y);
	    	printf("%fl\n", z);
	    	printf("������� 18 : �����\n");
		}

		else if (var == 19)
		{
    		printf("������� 19 : ������\n");
    		printf("������� ���� ����� \n");
    		scanf_s("%fl", &a);

			y = sqrt((1 - cos(a)) / (1.0 + cos(a)));
			z = (1.0 - cos(a)) / sin(a); 

			printf("%fl\n", y);
	    	printf("%fl\n", z);
    		printf("������� 19 : �����\n");
		}

		else if (var == 20)
		{
    		printf("������� 20 : ������\n");
    		printf("������� ���� ����� \n");
    		scanf_s("%fl", &a);

			y = pow((1.0 + a + pow(a, 2)) / (2 * a + pow(a, 2)) + 2 - (1.0 - a + pow(a, 2)) / (2.0 * a - pow(a, 2)), -1) * (5.0 - 2 * pow(a,2));
			z = (4.0 - a) / 2;

			printf("%fl\n", y);
    		printf("%fl\n", z);
    		printf("������� 20 : �����\n");
		}
	}
	else 
    {
		printf("������ �������� �� ����������!\n");
	}
	system("pause");
	return(0);
}
