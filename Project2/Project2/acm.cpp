#define  _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<int> num(n,1);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				num[i]++;
				arr.erase(arr.begin() + j);
				j--;
				n--;
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swap(num[j], num[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " << num[i] << endl;
	}
	return 0;
}