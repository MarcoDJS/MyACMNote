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
//		}//��������
//		if (n <= 3)
//			printf("YES\n");//�������֪3��������һ������
//		else
//		{
//			for (int k = 4; k/2 <= n; k *= 2)//ֻҪ��һ��k<n������
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
//						}//�����2������ƽ���������������һ���޷�����
//					}
//					if (flag == 1)
//						break;
//				}
//				else//��2���η����������һ����֮�����������޷�����
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
//			if (flag == 0)//û���޷������������������
//				printf("YES\n");
//		}
//	}
//	return 0;
//}