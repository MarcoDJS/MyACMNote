//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int a[1000005];
//int M[100005];
//
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &M[i]);
//	}//Êý¾ÝÊäÈë
//	
//	for (int i = 1; i <= m;i++)
//	{
//		int begin = 1, end = n, mid;
//		int c = 0;
//		if (M[i] == 0 && a[1] == 0)
//			printf("1 ");
//		else
//		{
//			while (begin <= end)
//			{
//				mid = (begin + end) / 2;
//				if  (a[mid] >= M[i])
//				{
//					end = mid - 1;
//					c = -1;
//					if (a[mid] == M[i] && a[mid - 1] < a[mid])
//					{
//						c = mid;
//						break;
//					}
//				}
//				if (a[mid] < M[i])
//				{
//					begin = mid + 1;
//					c = -1;
//				}
//
//			}
//			printf("%d ", c);
//		}
//	}
//	return 0;
//}