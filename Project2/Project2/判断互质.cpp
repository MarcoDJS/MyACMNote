//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int a[100005];
//int b[100005];
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &b[i]);
//	}//����
//	int min = 0;//ab�н�С��һ��
//	int  flag = 0;//Ĭ��YES
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] == 1)
//			continue;//1һ������һ��������
//		for (int j = 1; j <= n; j++)
//		{
//			if (b[j] == 1)
//				continue;
//			if (a[i] < b[j])
//				min = a[i];
//			else
//				min = b[j];
//			for (int k = 2; k <= (min / 2); k++)
//			{
//				if (a[i] % k == 0 && b[j] % k == 0)
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1)
//				break;
//		}
//		if (flag == 1)
//			break;
//	}
//	if (flag == 1)
//		printf("No");
//	if (flag == 0)
//		printf("Yes");
//	return 0;
//}