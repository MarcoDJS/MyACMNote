//#define  _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 1; i <= t; i++)
//	{
//		int arr1[55], arr2[55];
//		int len1, len2;
//		scanf("%d %d", &len1, &len2);
//		for (int j = 1; j <= len1; j++)
//		{
//			scanf("%1d", &arr1[j]);
//		}
//		for (int j = 1; j <= len2; j++)
//		{
//			scanf("%1d", &arr2[j]);
//		}
//		int flag11 = 0;
//		int flag01 = 0;
//		int flag12 = 0;
//		int flag02 = 0;
//		for (int j = 1; j < len1; j++)
//		{
//			if (arr1[j] == arr1[j + 1] && arr1[j] == 0)
//				flag01 = 1;
//			if (arr1[j] == arr1[j + 1] && arr1[j] == 1)
//				flag11 = 1;
//		}
//		if (flag11 == 0 && flag01 == 0)
//			printf("YES\n");//s本身就好无需操作
//		else if (flag11 == 1 && flag01 == 1)
//			printf("NO\n");//t咋也救不了
//		else
//		{
//			if (arr2[1] != arr2[len2])//首尾不同插入没用
//				printf("NO\n");
//			else
//			{
//				for (int j = 1; j < len2; j++)
//				{
//					if (arr2[j] == arr2[j + 1]&& arr2[j] == 0)
//						flag02 = 1;
//					if (arr2[j] == arr2[j + 1]&& arr2[j] == 1)
//						flag12 = 1;
//				}
//				if (flag12 == 1 || flag02 == 1)
//					printf("NO\n");//t不好插了没用
//				else
//				{
//					if (flag01 == 1 && arr2[1] == 1)
//						printf("YES\n");
//					else if (flag11 == 1 && arr2[1] == 0)
//						printf("YES\n");
//					else
//						printf("NO\n");
//				}
//			}
//
//		}
//	}
//	return 0;
//}