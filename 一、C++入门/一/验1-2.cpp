#include <iostream>
using namespace std;

//排序
void _sort(int* p, int m)
{
	int i, j;
	int temp = 0;
	for (i = 0; i < m - 1; i++)
	{
		for (j = 0; j < m - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
			    temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

//输出
void _out(int *p, int m)
{
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
int main()
{
	int *p = new int[10];

	for (int i = 0; i < 10; i++)
		p[i] = rand() % 100;
	cout << "排序前：\n";
	_out(p, 10);
	_sort(p, 10);
	cout << "排序后：\n";
	_out(p, 10);

	delete []p;
	cout << "销毁内存空间成功；\n";

	system("pause");
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
