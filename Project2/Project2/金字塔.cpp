//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i < n; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < 2 * i - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//
//		}//上半层 无最长
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < 2 * (n - i) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//
//		}//下半层 有最长
//	}
//	return 0;
//}