#include<iostream>
using namespace std;
int main()
{
	char str[10];
	cin.ignore(6, 'T'); //����ǰ��6���ַ��������T����T��ֹ��Ծ
	cin.getline(str, 8);//��ʼ��ȡ������ַ������洢��str��
	cout << str << endl;
	system("pause");
	return 0;
}
