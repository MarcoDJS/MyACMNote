//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int a[10000][10000];
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (a[i][j] != 0)
//			{
//				c++;
//				break;
//			}
//		}
//	}
//	if (c > 0)
//		printf("NO");
//	else
//		printf("YES");
//	return 0;
//}