#include <iostream>
using namespace std;
int main()
{
	int *pi = new int(10); //new һ��int���󣬳�ʼֵΪ10
	cout << "*pi = " << *pi << endl;
	*pi = 20;    //ͨ��ָ��ı������ֵ
	cout << "*pi = " << *pi << endl;
	char *pc = new char[10];
	for (int i = 0; i < 10; i++)
		pc[i] = i + 65;    //�������д���Ԫ��
	for (int i = 0; i < 10; i++)
		cout << pc[i] << " ";
	cout << endl;
	delete pi;      //�ͷ�int����
	delete[]pc;    //�ͷ��������
	system("pause");
	return 0;
}
