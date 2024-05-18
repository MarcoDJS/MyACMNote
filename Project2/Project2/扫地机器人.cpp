//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int t = 0;
//	int n, m, rb, cb, rd, cd;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		scanf("%d %d %d %d %d %d", &n, &m, &rb, &cb, &rd, &cd);
//		int j = 0;
//		int R = 1, C = 1;//Åö±Ú´ÎÊý¼ÆËã
//		while(1)
//		{
//			if (rb == rd || cb == cd)
//				break;
//			if (rb == n)
//				R++;
//			if (rb == 1 && R != 1)
//				R++;
//			if (R % 2 == 1)
//				rb++;
//			else
//				rb--;
//			if (cb == m)
//				C++;
//			if (cb == 1 && C != 1)
//				C++;
//			if (C % 2 == 1)
//				cb++;
//			else
//				cb--;
//			j++;
//		}
//		printf("%d\n", j);
//	}
//	return 0;
//}