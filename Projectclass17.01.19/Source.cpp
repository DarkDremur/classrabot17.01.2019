#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void task1()
{
	const int n = 10;
	int l = 0, r = n - 1, m, a[n], flag = 0, x; // ���������� ���� ����� 1 ��� ��� 0
	//����� ���� ������ ������ �
	//� ������������� ��� �� �����������
	printf("������� ������� �������\n");
	scanf("%d", &x);
	while (l <= r)
	{
		m = (l + r) / 2; //�������� ���������
		if (a[m] == x)   /*����� ������ �������*/
		{
			flag = 1;    /*���������� ����*/
			break;       /*����� �� �����*/
		}
		if (x < a[m])
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}

	}
	if (flag)
	{
		printf("�����: a[%d] = % d", m, a[m]);
	}
	else
	{
		printf("������ ���");
	}

}


void task2()
{
	const int n = 10;
	int l = 0, r = n - 1, m, a[n], flag = 0, x, nMin = 0, c = 0;
	for (size_t i = 0; i < n-1; i++) // ����� n-1 ��������
	{
		nMin = 1;
		for (size_t j = i + 1; j < n; j++) //����� ������������ �� a[i] �� a[n-1]
		{
			if (a[j] < a[nMin])
			{
				nMin = j;
			}
		}
		if (nMin != i)
		{
			c = a[i];
			a[i] = a[nMin]; //���� ����� ������������
			a[nMin] = c;

		}
	}


}

void task3()
{
	const int n = 5;
	const int m = 4;
	int l;
	int a[m][n];

	for (size_t i = 0; i < m; i++) //���� �� ��������
	{
		for (size_t j = 0; j < n; j++)// ����� ����� ������
		{
			printf("�����: a[%d] % d =", i, j);
			scanf ("%d", &a[i]);
		}
	}
	printf("������� �\n");
	for (size_t i = 0; i < m; i++) //���� �� ��������
	{
		for (size_t j = 0; j < n; j++)// ����� ����� ������
		{
			printf("�����: a[%d]", a[i][j]);
			printf("\n");
		}
	}

}

//1 /2
//� ������������� ������� ����� ���������� �� ����������� ��������� ����k �������

void task3()
{
	int a[10][10] = { 0 }, min = 10, max = 0;
	for (size_t i = 0; i < 10; i++)
	{


		for (size_t j = 0; j < 10; j++)
		{
			a[i][i] = rand() % 10;
			printf(" %d\t", a[i][i]);

		}
		printf("\n\n");
	}

	for (size_t i = 0; i < 10; i++)
		{
			min = 10;
			for (size_t j = 0; j < 10; j++)
			{
				if (a[i][j] < min)
				{
					min = a[i][j];
			
				}
			}
			printf("%d", min);
			if (min>max)
			{
				max = min;
			}

		
	    }
	printf("\nmax = %d\n", max);

}

//2 
//������ ������, ��������� �� 15 - �� ���������(���������� ����� �����).
//�������� ����������� ����, ���������� �������� ��������� ������� �,
//����� �������, ������������ ����� ������.
//��������, �������� ������ : 25 71 84�, ����� ������ : 52 17 48�.
void task4()
{
	int a[15][15] = { 0 }, b[15][15] = { 0 }, x1, x, y;
	for (size_t i = 0; i < 15; i++)
	{
		for (size_t j = 0; j < 15; j++)
		{
			a[i][j] = rand() % 15;
			printf(" = %d\n", a[i][j]);
		}
		printf("\n\n");
	}

	for (size_t i = 0; i < 15; i++)
	{
		for (size_t j = 0; j < 15; j++)
		{
			x = a[i][j] / 10;
			x1 = a[i][j] % 10;
			b[i][j] = x1 * 10 + x;
			printf("%d\t", b[i][j]);
		}
		
	}


}

//5
//5.	��� ������, ��������� �� 12 �������� �����.
//������� ��������, ������� ����������� ����� ���� ���.
void task5()
{
	int A[5][5] = { 0 }, count = 0, B[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			A[i][j] = 10 + rand() % 40;
			printf("%d\t", A[i][j]);
		}

		printf("\n\n");
	}
	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			count = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (A[k][p] == A[i][j])// && A[k][p]!=0
						count++;
				}
			}

			if (count - 1 >= 2)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						if (A[k][p] == A[i][j])
							B[i][j] = -1;
					}
				}
			}

		}
	}

	for (int k = 0; k < 5; k++)
	{
		for (int p = 0; p < 5; p++)
		{
			if (B[k][p] == -1)
				A[k][p] = 0;
		}
	}

	printf("\n-----------------------------------\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			printf("%d\t", B[i][j]);
		}


		printf("\n\n");
	}
}












int main()
{
	srand(time(NULL) + rand());
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("������� ����� �������\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &task);

		switch (task)
		{
		 case 1:
		 {
			task1();
		 }break;
		 case 2:
		 {
			task2();
		 }break;
		 case 3:
		 {
			task3();
		 }break;
		 case 4:
		 {
			 task4();
		 }break;
		 case 5:
		 {
			 task5();
		 }break;
		}


		printf("-------------------------------------------------------------------------------\n");
		printf("������ ���������� 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}