#include <iostream>
using namespace std;
int main()
{
	cout << "first call: " << cin.get() << endl;  //��һ����ʽ����

	char ch;
	cin.get(ch); //�ڶ�����ʽ����
	cout << "second call: " << ch << endl;

	char str[10];
	cin.get(str, 8, 'T'); //��������ʽ����
	cout << "third call: " << str << endl;
	system("pause");
	return 0;
}
