//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		int arr[25];
//		int n = 0;
//		int flag = 0;
//		scanf("%d", &n);
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &arr[j]);
//		}//输入数据
//		if (n <= 3)
//			printf("YES\n");//由题意可知3个数以内一定可以
//		else
//		{
//			for (int k = 4; k/2 <= n; k *= 2)//只要上一次k<n就运行
//			{
//				if (k < n)
//				{
//					for (int j = (k/2)+1; j < k; j++)
//					{
//						if (arr[j] > arr[j + 1])
//						{
//							printf("NO\n");
//							flag = 1;
//							break;
//						}//如果在2的两次平方间的数有逆序，则一定无法调整
//					}
//					if (flag == 1)
//						break;
//				}
//				else//若2最大次方个数和最后一个数之间有逆序，则无法调整
//				{
//					for (int j = (k/2)+1; j < n; j++)
//					{
//						if (arr[j] > arr[j + 1])
//						{
//							printf("NO\n");
//							flag = 1;
//							break;
//						}
//					}
//				}
//			}
//			if (flag == 0)//没有无法调整的情况，即可以
//				printf("YES\n");
//		}
//	}
//	return 0;
//}