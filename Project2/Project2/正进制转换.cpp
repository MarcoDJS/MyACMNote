//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//#include<math.h>
//
//int main()
//{
//	int N, R;
//	int arr[1000] = {0};
//	scanf("%d %d", &N, &R);
//	
//	int j = 0;
//	while (pow(R,j)<= N)
//		j++;//ȷ��ת����Ϊjλ��
//	for (int i = 1; i <= N; i++)
//	{
//		arr[j]++;
//		for (int k = j; k > 0; k--)
//		{
//			if (arr[k] == R)
//			{
//				arr[k] = 0;
//				arr[k - 1]++;
//			}//��0��ʼ��R��������������N����
//		}
//	}
//	printf("%d=", N);
//	for (int i = 1; i <= j; i++)
//	{
//		if (arr[i] > 9)
//			printf("%c", 65+(arr[i]-10));
//		else
//			printf("%d", arr[i]);//ÿһλ�ֱ����
//	}
//	printf("(base%d)", R);
//	return 0;
//}