//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int n = 0;
//	char ch[15][30];
//	int j = 1;
//	scanf("%d", &n);
//	for (int i = 0; j <= n; i++)
//	{
//		scanf("%c", &ch[j][i]);
//		if (ch[j][i] == ' '||ch[n][i]=='\n')
//		{
//			j++;
//			ch[n][i] = ' ';//�������һ�λس����ҷ��������ʱ���пո�
//			i = 0;
//		}
//	}//���뵥��
//	int arr[30];
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = i;
//	}//���ʱ�ţ���j
//	int temp = 0;
//	for (int i = n; i > 1; i--)
//	{
//		for (j = 1; j < i; j++)
//		{
//			int a = ch[j][1] - '0';
//			int b = ch[j + 1][1] - '0';
//			if (a > b)
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}//Ϊ���ʱ������
//	j = 1;
//	for (int i = 1; j <= n; i++)
//	{
//		printf("%c", ch[arr[j]][i]);
//		if (ch[arr[j]][i] == ' ' || ch[n][i] == '\n')
//		{
//			j++;
//			i = 0;
//		}
//	}// �������
//	return 0;
//}