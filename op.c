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
			printf("1. ����\n");
			printf("2. ����\n");
			printf("3. ����\n");
			printf("4. ������\n");
			printf("5. ������\n");

			printf("���ϴ� �޴��� �����Ͻÿ�(1~5): ");
			scanf_s("%d", &menu);

			printf("���� 2���� �Է��Ͻÿ� : ");
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
				printf("�߸��� �Է°��Դϴ�.\n");
				continue;
				break;
			}

			printf("����Ϸ��� 'y'�� �����ÿ� : ");
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
	printf("������ : %d\n", a + b);
}

void Min(int a, int b)
{
	printf("������ : %d\n", a - b);
}

void Mul(int a, int b)
{
	printf("������ : %d\n", a * b);
}

void Div(int a, int b)
{
	if (b == 0)
	{
		printf("���������� ���� 0�� �� �� �����ϴ�.\n");
	}
	else
	{
		printf("������ : %.2f\n", (double)a / b);
	}
}

void Mod(int a, int b)
{
	if (b == 0)
	{
		printf("���������� ���� 0�� �� �� �����ϴ�.\n");
	}
	else
	{
		printf("������ : %d\n", a % b);
	}
}