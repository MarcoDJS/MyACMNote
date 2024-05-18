//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//int arr[200000], l[200000], r[200000], k[200000],temp[200000];
//
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		int n = 0, q = 0;
//		scanf("%d %d", &n, &q);
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &arr[j]);
//		}
//		for (int a = 1; a <= q; a++)
//		{
//			long long sum = 0;
//			scanf("%d %d %d", &l[a], &r[a], &k[a]);
//			for (int j = l[a]; j <= r[a]; j++)
//			{
//				temp[j] = arr[j];
//				arr[j] = k[a];
//			}
//			for (int j = 1; j <= n; j++)
//			{
//				sum += arr[j];
//			}
//			if (sum % 2 == 1)
//				printf("YES\n");
//			else
//				printf("NO\n");
//			for (int j = l[a]; j <= r[a]; j++)
//			{
//				arr[j] = temp[j];
//			}
//		}
//	}
//	return 0;
//}