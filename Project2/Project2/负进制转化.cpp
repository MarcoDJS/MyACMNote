//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include<cstdio>
//char ch[100000];
//int main()
//{
//	int N1 = 0, R = 0;
//	int n = 0;
//	scanf("%d %d", &N1, &R);
//	int N = N1;
//	
//	for(int i=1;1;i++)
//	{
//		int a = 0;//½á¹ûÎ»
//		a = N % R;
//		N /= R;
//		if (a < 0)
//		{
//			a -= R;
//			N++;
//		}
//		if (a < 10)
//			ch[i]=a+'0';
//		else
//			ch[i]=a-10+'A';
//		if (N / R == 0 && N % R >= 0)
//		{
//			if (N % R < 10)
//				ch[i+1]= (N % R)+'0';
//			else
//				ch[i+1]= (N % R)-10+'A';
//				n = i+1;
//			break;
//		}
//			
//	}
//	printf("%d=", N1);
//	for (int i = n; i > 0; i--)
//	{
//		if (ch[n] == '0')
//			i--;
//		printf("%c", ch[i]);
//	}
//	printf("(base%d)", R);
//	return 0;
//}