//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int m, n;
//	int arr[200] = { 0 };
//	int stop = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = 1; i <= m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min1 = 100;
//	for (int i = 1; i <= m; i++)
//	{
//		if (arr[i] <= min1)
//		{
//			min1 = arr[i];//找到用时最短的
//		}
//	}
//	if (min1 > n)
//		printf("0");//一个都学不了的特殊情况
//	else
//	{
//		int k = 0;//用于判断用时
//		int min = 100;
//		for (int i = 1; i <= m; i++)
//		{
//			for (int a = 1; a <= m; a++)
//			{
//				if (arr[a] <= min)
//					min = arr[a];
//			}//找到最小值
//				if (k + min <= n)//有时间学用时最短的
//				{
//					k += min;
//					for (int j = 1; j <= m; j++)
//					{
//						if (arr[j] == min)
//						{
//							arr[j] = 200;
//							break;
//						}//将该已学会的用时改为200，令判断下一个最小值时不受其影响
//					}
//					min = 100;//为下一次判断最小值做准备
//					stop = i;
//				}
//				else//用时最短的第i个学不了，所以只能学i-1个
//				{
//					stop = i-1;
//					break;
//				}
//		}
//		printf("%d\n", stop);
//		for (int i = 1; i <= m; i++)
//		{
//			if (arr[i] == 200)
//				printf("%d ", i);//将所有变为200，即已经学会的输出
//		}
//	}
//	return 0;
//}