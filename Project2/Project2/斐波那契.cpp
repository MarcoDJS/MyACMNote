//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//long long arr[100005];
//
//int main()
//{
//	int N, K;
//	scanf("%d %d", &N, &K);
//	for (int i = 2; i <= N; i++)
//	{
//		arr[1] = 1;
//		if (i <= K)
//		{
//			for (int k = i-1; k>=1; k--)
//			{
//				arr[i] += arr[k];
//			}
//			arr[i] += 1;
//		}
//		if (i > K)
//		{
//			for (int k = 1; k<=K; k++)
//			{
//				arr[i] += arr[i-k];
//			}
//		}
//	}
//	printf("%lld", arr[N]);
//	return 0;
//}