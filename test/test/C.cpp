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
//			min1 = arr[i];//�ҵ���ʱ��̵�
//		}
//	}
//	if (min1 > n)
//		printf("0");//һ����ѧ���˵��������
//	else
//	{
//		int k = 0;//�����ж���ʱ
//		int min = 100;
//		for (int i = 1; i <= m; i++)
//		{
//			for (int a = 1; a <= m; a++)
//			{
//				if (arr[a] <= min)
//					min = arr[a];
//			}//�ҵ���Сֵ
//				if (k + min <= n)//��ʱ��ѧ��ʱ��̵�
//				{
//					k += min;
//					for (int j = 1; j <= m; j++)
//					{
//						if (arr[j] == min)
//						{
//							arr[j] = 200;
//							break;
//						}//������ѧ�����ʱ��Ϊ200�����ж���һ����Сֵʱ������Ӱ��
//					}
//					min = 100;//Ϊ��һ���ж���Сֵ��׼��
//					stop = i;
//				}
//				else//��ʱ��̵ĵ�i��ѧ���ˣ�����ֻ��ѧi-1��
//				{
//					stop = i-1;
//					break;
//				}
//		}
//		printf("%d\n", stop);
//		for (int i = 1; i <= m; i++)
//		{
//			if (arr[i] == 200)
//				printf("%d ", i);//�����б�Ϊ200�����Ѿ�ѧ������
//		}
//	}
//	return 0;
//}