#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int line, max = 0;
	char str1[100], str2[100];
	cout << "please input some strings:" << endl;
	while (cin.getline(str1, 100)) //�������ѭ��������Ctrl+z
	{
		line = cin.gcount();  //��ȡgetline()ʵ�ʶ�����ַ�����
		if (line > max)
		{
			max = line;
			strcpy(str2, str1);
		}
	}
	cout << endl;
	cout << "the longest string is: " << str2 << endl;
	cout << "the length is: " << max << endl;
	system("pause");
	return 0;
}
