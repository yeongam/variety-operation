#include <stdio.h>

void Sum(int a, int b);
void Min(int a, int b);
void Mul(int a, int b);
void Div(int a, int b);
void Mod(int a, int b);

int main()
{
	int menu;
	char ch = 'y';

	int a, b;

	while (1)
	{
		if (ch == 'y' || ch == 'Y')
		{
			printf("MENU\n");
			printf("1. 덧셈\n");
			printf("2. 뺄셈\n");
			printf("3. 곱셈\n");
			printf("4. 나눗셈\n");
			printf("5. 나머지\n");

			printf("원하는 메뉴를 선택하시오(1~5): ");
			scanf_s("%d", &menu);

			printf("숫자 2개를 입력하시오 : ");
			scanf_s("%d %d", &a, &b);

			switch (menu)
			{
			case 1:
				Sum(a, b);
				break;
			case 2:
				Min(a, b);
				break;
			case 3:
				Mul(a, b);
				break;
			case 4:
				Div(a, b);
				break;
			case 5:
				Mod(a, b);
				break;
			default:
				printf("잘못된 입력값입니다.\n");
				continue;
				break;
			}

			printf("계속하려면 'y'를 누르시오 : ");
			scanf_s(" %c", &ch);
		}
		else
		{
			break;
		}
	}

	return 0;
}

void Sum(int a, int b)
{
	printf("연산결과 : %d\n", a + b);
}

void Min(int a, int b)
{
	printf("연산결과 : %d\n", a - b);
}

void Mul(int a, int b)
{
	printf("연산결과 : %d\n", a * b);
}

void Div(int a, int b)
{
	if (b == 0)
	{
		printf("나누어지는 수는 0이 될 수 없습니다.\n");
	}
	else
	{
		printf("연산결과 : %.2f\n", (double)a / b);
	}
}

void Mod(int a, int b)
{
	if (b == 0)
	{
		printf("나누어지는 수는 0이 될 수 없습니다.\n");
	}
	else
	{
		printf("연산결과 : %d\n", a % b);
	}
}