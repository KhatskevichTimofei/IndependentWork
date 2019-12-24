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
	printf("Введите номер варианта: ");
	scanf_s("%i", &var);
	if (var > 0 && var < 21)
	{
		if (var == 1)
		{
			printf("Вариант 1 : Начало \n");
			printf("Введите угол альфа\n");
			scanf_s("%fl", &a);

			y = (sin((Pi / 2.0) + 3.0 * a)) / 1.0 - sin(3.0 * a - Pi);
			z = (1.0 / tan(x)) * ((5.0 / 4) * Pi + (3.0 / 2) * a);

			printf("%f\n", y);
			printf("%f\n", (float)z);
			printf("Вариант 1 : Конец\n");
		}

		else if (var == 2)
		{
			printf("Вариант 2 : Начало\n");
			printf("Введите угол альфа\n");
			scanf_s("%fl", &a);

			y = cos(a) + sin(a) + cos(3.0 * a) + sin(3.0 * a);
			z = 2.0 * sqrt(2.0) * cos(a) * sin(Pi / 4.0 + 2.0 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 2 : Конец\n");
		}

		else if (var == 3)
		{
			printf("Вариант 3 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);

			y = (sin(2.0 * a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) + 1.0 - 2.0 * pow(sin(2 * a), 2));
			z = 2.0 * sin(a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 3 : Конец\n");
		}

		else if (var == 4)
		{
			printf("Вариант 4 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%f", &a);

			y = (sin(2.0 * a) + sin(5.0 * a) - sin(3.0 * a)) / (cos(a) - cos(3.0 * a) + cos(5.0 * a));
			z = tan(3.0 * a);

			printf("%f\n", y);
			printf("%f\n", z);
			printf("Вариант 4 : Конец\n");
		}

		else if (var == 5)
		{
			printf("Вариант 5 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);

			y = 1.0 - 1.0 / 4 * pow(sin(2.0 * a), 2) + cos(2.0 * a);
			z = pow(cos(a), 2) + pow(cos(a), 4);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 5 : Конец\n");
		}

		else if (var == 6)
		{
			printf("Вариант 6 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);

			y = cos(a) + cos(2.0 * a) + cos(6.0 * a) + cos(7.0 * a);
			z = 4.0 * cos(a / 2.0) * cos((5.0 / 2) * a) * cos(4.0 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 6 : Конец\n");
		}
		
		else if (var == 7)
		{
			printf("Вариант 7 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);

			y = pow(cos((3.0 / 8) * Pi - (a / 4.0)), 2);
			z = (sqrt(2) / 2.0) * sin(a / 2.0);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 7 : Конец\n");
		}
		
		else if (var == 8)
		{
			printf("Вариант 8 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);

			y = 2.0 * pow(sin(3.0 * Pi - 2.0 * a), 2) * pow(cos(5.0 * Pi + 2.0 * a), 2);
			z = (1.0 / 4) - (1 / 4.0) * sin((5.0 / 2) * Pi - 8 * a);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 8 : Конец\n");
		}

		else if (var == 9)
		{
		    printf("Вариант 9 : Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);
            
			y = pow(cos(a) - cos(b), 2) - pow(sin(a) - sin(b),2);
			z = -4.0 * pow((a - b) / 2.0, 2) * cos(a + b);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 9 : Конец\n");

	   
        }
		
		else if (var == 10)
		{
		    printf("Вариант 10 : Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);

			y = pow(cos(a), 4) + pow(sin(b), 2) + (1.0 / 4) * pow(sin(2 * a), 2) - 1.0;
			z = sin(b + a) * sin(b - a);

			printf("%fl\n", y);
		    printf("%fl\n", z);
		    printf("Вариант 10 : Конец\n");


		}

		else if (var == 11)
		{
		    printf("Вариант 11 :Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);
			

			y = (1.0 - 2.0 * pow(sin(a), 2)) / (1.0 + sin(3.0 * a));
			z = (1.0 - tan(a)) / (1.0 + tan(a));

			printf("%fl\n", y);
		    printf("%fl\n", z);
		    printf("Вариант 11 : Конец\n");


		}

		else if (var == 12)
		{
		    printf("Вариант 12 : Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);

			y = (sin(4.0 * a)) / (1.0 + cos(4.0 * a)) * (cos(2.0 * a)) / (1.0 + cos(2.0 * a));
			z = (1.0 / tan((3 / 2) * Pi - a));

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("Вариант 12 : Конец\n");
		}

		else if (var == 13)
		{
		    printf("Вариант 13 : Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);

			y = (sin(a) + cos(2.0 * b - a)) / (cos(a) - sin(2 * b - a));
			z = (1 + sin(2.0 * b)) / (cos(2 * b));

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("Вариант 13 : Конец\n");
		}

		else if (var == 14)
		{
		    printf("Вариант 14 : Начало\n");
		    printf("Введите угол альфа \n");
		    scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);
			printf("Введите угол гамма\n");
			scanf_s("%fl", &Y);

			y = 1.0 / 4 * (sin(a + b + Y) - sin(b + Y - a) + sin(Y + a - b) - sin(a + b + Y));
			z = sin(a) * cos(b) * cos(Y);

			printf("%fl\n", y);
		    printf("%fl\n", z);
			printf("Вариант 14 : Конец\n");
		}

		else if (var == 15)
		{
    		printf("Вариант 15 : Начало\n");
    		printf("Введите угол альфа \n");
      		scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);

			y = (sqrt(2 * b + 2.0 * sqrt(pow(b, 2) - 4))) / (sqrt(pow(b, 2) - 4) + b + 2);
			z = 1.0 / sqrt(b + 2);

			printf("%fl\n", y);
	    	printf("%fl\n", z);
    		printf("Вариант 15 : Конец\n");


		}

		else if (var == 16)
		{
    		printf("Вариант 16 : Начало\n");
    		printf("Введите число x \n");
    		scanf_s("%fl", &x);

			y = (pow(x, 2) + 2 * x - 3.0 + (x + 1) * sqrt(pow(x, 2) - 9)) / (pow(x, 2) + 2 * x - 3.0 + (x + 1) * sqrt(pow(x, 2) - 9));
			z = sqrt((x + 3) / (x - 3));

			printf("%fl\n", y);
    		printf("%fl\n", z);
			printf("Вариант 16 : Конец\n");
		}

		else if (var == 17)
		{
			printf("Вариант 17 : Начало\n");
			printf("Введите угол альфа \n");
			scanf_s("%fl", &a);
			printf("Введите угол бета\n");
			scanf_s("%fl", &b);
			printf("Введите угол гамма\n");
			scanf_s("%fl", &Y);

			y = (1.0 / 4) * (cos(a + b + Y) + cos(b + Y - a) + cos(Y + a - b) + cos(a + b + Y));
			z = cos(a) * cos(b) * cos(Y);

			printf("%fl\n", y);
			printf("%fl\n", z);
			printf("Вариант 17 : Конец\n");
		}

		else if (var == 18)
		{
		printf("Вариант 18 : Начало\n");
		printf("Введите угол альфа \n");
		scanf_s("%fl", &a);

		    y = (3 * tan(a) - pow(tan(a), 3)) / (1.0 - 3 * pow(tan(a), 2));
			z = tan(3 * a);

			printf("%fl\n", y);
	    	printf("%fl\n", z);
	    	printf("Вариант 18 : Конец\n");
		}

		else if (var == 19)
		{
    		printf("Вариант 19 : Начало\n");
    		printf("Введите угол альфа \n");
    		scanf_s("%fl", &a);

			y = sqrt((1 - cos(a)) / (1.0 + cos(a)));
			z = (1.0 - cos(a)) / sin(a); 

			printf("%fl\n", y);
	    	printf("%fl\n", z);
    		printf("Вариант 19 : Конец\n");
		}

		else if (var == 20)
		{
    		printf("Вариант 20 : Начало\n");
    		printf("Введите угол альфа \n");
    		scanf_s("%fl", &a);

			y = pow((1.0 + a + pow(a, 2)) / (2 * a + pow(a, 2)) + 2 - (1.0 - a + pow(a, 2)) / (2.0 * a - pow(a, 2)), -1) * (5.0 - 2 * pow(a,2));
			z = (4.0 - a) / 2;

			printf("%fl\n", y);
    		printf("%fl\n", z);
    		printf("Вариант 20 : Конец\n");
		}
	}
	else 
    {
		printf("Такого варианта не существует!\n");
	}
	system("pause");
	return(0);
}
