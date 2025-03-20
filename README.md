# 工具语法
## 一.STL
- 容器：存储数据的数据结构，例如vector，set等
- 算法：用于操作容器内数据的函数模板，如sort，find，copy等
- 迭代器：用于遍历容器内元素的类似指针的对象
### 1.vector可变长数组，防止越界，节省空间<br>
使用迭代器iterator对vector数组进行访问：
```C++
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	for(int i=0;i<5;i++)
	{
		v.push_back(i); //在v末尾添加元素i
	}
	auto it = v.begin(); //定义迭代器it指向v的第一个元素，其数据类型为vector<int>::iterator
}
```
现在vector中就存有0，1，2，3，4了<br>
#### 常用函数：
```C++
v.push_back(element);//向v末尾添加元素element
v.pop_back();//删除v中最后一个元素
v.size();//返回v中元素个数
v.insert(it,element);//在迭代器it位置之前插入一个新元素
v,erase(it);//删除迭代器位置元素
```
### 2.set自动去重，自动排序<br>
set不能通过数组下标访问，只能使用迭代器
#### 常用函数：
```C++
s.insert(element);
s.find(element);
```
例如寻找set中是否存在元素5：
```C++
auto it=s.find(5);//若找到，it指向其位置，否则指向set末尾
if(it!=s.end())
{
	cout<<*it<<endl;
}
```
### 3.String字符串，可直接访问也可同char
字符串拼接的两种方式<br>
```C++
string str1="abc";
string str2="def";
//运用加法
str3=str1+str2;//"abcdef"
//append函数
str4=str1.append(str2,1,2);//(字符串，初始位置，长度)"abcef"
```
两个string可通过字典序比大小，a<b<br>
s1.compare(s2)，s1大于s2返回1，小于-1，等于0<br>
.length/size()获取字符串长度<br>
.find()查找，.substr()子串:
```C++
string s1="abcdef"
string s2="def"
int ans=s1.find(s2);//返回d所在位置3，若无则返回-1
string sub1=s1.substr(2);//从s1的第二个元素往后截取，"cdef"
string sub2=s2.substr(1，3);//截取s2的第1-3个元素，"ef"
```
#### 例题：将string类型的数字加法并以string类型输出
```C++
#include<iostream>
#include<string>
using namespace std;

string add(string s1, string s2)
{
	int carry = 0;//判断进位
	while (s1.size() < s2.size())
	{
		s1 = '0' + s1;
	}
	while (s1.size() > s2.size())
	{
		s2 = '0' + s2;
	}//将s1,s2补为相同位数
	string ans = s1;
	for (int i = s1.size() - 1; i >= 0; i--)
	{
		ans[i] = ((s1[i] - '0') + (s2[i] - '0')) % 10 + carry + '0';
		carry = ((s1[i] - '0') + (s2[i] - '0')) / 10;
	}
	if (carry > 0)
	{
		ans = '1' + ans;//最后进位
	}
	return ans;
}

int main()
{
	string a, b;
	cin >> a;
	cout << '+';
	cin >> b;
	string ans = add(a, b);
	cout << '=' << ans;
	return 0;
}
```