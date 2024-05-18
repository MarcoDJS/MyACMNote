//#define  _CRT_SECURE_NO_WARNINGS 
//#include<cstdio>
//
//long long a[30005], b[30005];
//
//int main()
//{
//	int k = 0, m = 0, n = 0;
//	int c = -1;
//	scanf("%d %d %d", &k, &m, &n);
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%lld %lld", &a[i], &b[i]);
//	}
//		for (int i = 1; i <= m; i++)
//		{
//			if (a[i] <= k && (k / a[i]) * b[i] >= n)
//			{
//				printf("%d ", i);
//				c = 0;
//			}
//		}
//		if (c == -1)
//			printf("-1");
//	return 0;
//}