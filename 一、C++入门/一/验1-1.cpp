#include <iostream>
#include <string>
using namespace std;

string str[50];  //字符串数组

void _sort(string str[], int m); //对字符串排序函数
int main()
{
	int m, n;  //m为要排序的人名个数，n为控制数
	while (1)
	{
		cout << "请输入要排序的人名个数：\n";
		cin >> m;
		if (m == 0) //输入0退出
			return 0;
		cout << "请输入"<<m<<"个人名：\n";
		for (n = 1; n <= m; n++)
			cin >> str[n];

		_sort(str, m); //调用排序函数
		cout << "排序后人名列表如下所示：\n";
		for (n = 1; n <= m; n++)
			cout << str[n] << endl;
	}

	return 0;
}

void _sort(string str[], int m)
{
	int i, j;
	for (i = 2; i <= m; i++)  //i从第三个元素（角标为2）开始
	{                         //在创建字符串数组时，0角标没有存放元素
		if (str[i] < str[i - 1])
		{
			str[0] = str[i];
			str[i] = str[i - 1];
			for (j = i - 2; str[0] < str[j]; j--)  //j=i-2；i是从2开始的
				str[j + 1] = str[j];
			//循环结束，将0位置的数据与j+1位置互换
			str[j + 1] = str[0];
		}
	}
}
