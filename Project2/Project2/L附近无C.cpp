//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch[2000] = { 0 };
//	for (int i = 0; i <= n; i++)
//	{
//		scanf("%c", &ch[i]);
//	}//ÊäÈë
//	if (n == 1 && ch[1] == '.')
//		printf("C");
//	else {
//		for (int i = 1; i <= n; i++)
//		{
//			if ((ch[i] == '.' || ch[i] == 'C') && ch[i - 1] != 'L' && ch[i - 2] != 'L')
//				ch[i - 1] = 'C';
//			if ((ch[i] == '.' || ch[i] == 'C') && ch[i + 1] != 'L' && ch[i + 2] != 'L')
//				ch[i + 1] = 'C';
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			printf("%c", ch[i]);
//		}
//	}
//	return 0;
//}