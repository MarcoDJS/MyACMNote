//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int t = 0;
//	int n = 0;
//	int k = 0;
//	int arr[200] = { 0 };
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		scanf("%d", &n);
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &arr[j]);
//		}//输入数据
//		if (arr[1] != arr[2] && arr[1] != arr[3])
//			printf("1\n");
//		else if (arr[n] != arr[n - 1] && arr[n] != arr[n - 2])
//			printf("%d\n", n);//第一个和最后一个特殊判断
//		else
//		{
//			for (int l = 2; l < n; l++)
//			{
//				if (arr[l] != arr[l + 1] && arr[l] != arr[l - 1])
//					k = l;//找到与左右两项不同的项
//			}
//			printf("%d\n", k);
//		}
//	}
//	return 0;
//}