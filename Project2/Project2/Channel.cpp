//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	int arr[700];//�����ж���1ΪYES 2ΪNO 3ΪMAYBE
//	
//	for (int i = 1; i <= t; i++)
//	{
//		int n, a, q;
//		scanf("%d %d %d\n", &n, &a, &q);
//		int k = a;
//		char ch[200] = { 0 };
//		for (int j = 1; j <= q; j++)
//		{
//			scanf("%c", &ch[j]);
//		}//����q��+-
//		if (a == n)
//			arr[i]=1;
//		else
//		{
//			for (int l = 1; l <= q; l++)
//			{
//				if (ch[l] == '+')
//					k++;
//			}
//			if (k < n)
//				arr[i]=2;
//			else
//			{
//				k = a;
//				for (int l = 1; l <= q; l++)
//				{
//					if (ch[l] == '+')
//						k++;
//					if (ch[l] == '-')
//						k--;
//					if (k == n)
//					{
//						arr[i]=1;
//						break;
//					}//����һ������
//					if (l == q)
//						arr[i]=3;
//				}
//			}
//				
//		}
//	}
//	for (int i = 1; i <= t; i++)
//	{
//		if (arr[i] == 1)
//			printf("YES\n");
//		if (arr[i] == 2)
//			printf("NO\n");
//		if (arr[i] == 3)
//			printf("MAYBE\n");
//	}
//	return 0;
//}