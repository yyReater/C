#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> lt; //����һ��list�б�����
	for (int i = 0; i < 10; i++)
		lt.push_back(i + 1);  //�������в���Ԫ��
	list<int>::iterator it;  //����һ��list������
	for (it = lt.begin(); it != lt.end(); it++)
		cout << *it << " ";
	cout << endl;
	list<int>::reverse_iterator itr(it); //��itת��Ϊ���������
	for (itr = lt.rbegin(); itr != lt.rend(); itr++) //itr++�������ƶ�
		cout << *itr << " ";
	cout << endl;
	system("pause");
	return 0;
}
