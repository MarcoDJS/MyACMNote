#define  _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>

int main()
{
	int n = 0;
	int num[200] = { 0 };
	double start[200] = { 0 };
	double end[200] = { 0 };
	double rate[200] = { 0 };
	int A = 0, B = 0;
	double Arate[200] = { 0 }, Brate[200] = { 0 };
	int Anum[200] = { 0 }, Bnum[200] = { 0 };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %lf %lf", &num[i], &start[i], &end[i]);//输入数据
		rate[i] = end[i] / start[i];
	}
	for (int i = 1; i <= 100; i++)
	{
		Arate[i] = 10000;
		Brate[i] = 10000;
	}//给ABrate赋初值，方便一会排序

	for (int i = 1; i <= n; i++)
	{
		if (rate[i] >= 100)
		{
			A++;
			Arate[i] = rate[i];
			Anum[i] = num[i];
		}
		else
		{
			B++;
			Brate[i] = rate[i];
			Bnum[i] = num[i];
		}//得出AB个数并将增长率分为两组
	}
	double temp = 0;
	for (int j = 1; j < n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (Arate[i] > Arate[i + 1])
			{
				temp = Arate[i];
				Arate[i] = Arate[i + 1];
				Arate[i + 1] = temp;
				temp = num[i];
				Anum[i] = Anum[i + 1];
				Anum[i + 1] = temp;
			}
		}
	}//升序排列A增长率及编号
	for (int j = 1; j < n; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (Brate[i] > Brate[i + 1])
			{
				temp = Brate[i];
				Brate[i] = Brate[i + 1];
				Brate[i + 1] = temp;
				temp = Bnum[i];
				Bnum[i] = Bnum[i + 1];
				Bnum[i + 1] = temp;
			}
		}
	}//升序排列B增长率及编号
	printf("%d\n", A);
	for (int i = 1; i <= n; i++)
	{
		if (Arate[i] == 10000)
			break;
		printf("%d\n",Anum[i]);
	}
	printf("%d\n", B);
	for (int i = 1; i <= n; i++)
	{
		if (Brate[i] == 10000)
			break;
		printf("%d\n", Bnum[i]);
	}
	return 0;
}