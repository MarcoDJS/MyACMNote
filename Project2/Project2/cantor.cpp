//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int a[10000][10000];
//int b[10000][10000];
//int main()
//{
//	int n = 0;
//	int c = 0;
//	int A = 0;
//	int B = 0;
//	scanf("%d", &n);
//	for (int x = 1; c!=n; x++)
//	{
//		for (int i = 1; c!=n; i++)
//		{
//			if (i % 2 == 1)
//			{
//				a[i][1] = 1;
//				b[i][1] = i;
//				for (int j = 1; j <= i; j++)
//				{
//					a[i][j+1] = a[i][j] + 1;
//					b[i][j+1] = b[i][j] - 1;
//					c++;
//					if (c == n)
//					{
//						A = a[i][j];
//						B = b[i][j];
//						break;
//					}
//				}
//			}
//			else
//			{
//				a[i][1] = i;
//				b[i][1] = 1;
//				for (int j = 1; j <= i; j++)
//				{
//					a[i][j+1] = a[i][j] - 1;
//					b[i][j+1] = b[i][j] + 1;
//					c++;
//					if (c == n)
//					{
//						A = a[i][j];
//						B = b[i][j];
//						break;
//					}
//				}
//			}
//		}
//	}
//	printf("%d/%d", B, A);
//	return 0;
//}