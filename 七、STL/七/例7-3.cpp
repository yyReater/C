#include <iostream>
#include <deque>
using namespace std;
int main()
{
	deque<int> d(10);  //����һ��deque����

	//Ϊ������ֵ����������е�Ԫ��
	for (int i = 0; i < 10; i++)
		d[i] = i;   //Ϊ������ֵ
	cout << "��ֵ�����������Ԫ�أ�" << endl;
	for (int i = 0; i < 10; i++)
		cout << d.at(i) << " ";
	cout << endl;

	//��ͷβ������Ԫ��
	d.push_front(99); //��ͷ������33
	d.push_back(77);  //��β������77

	//����Ԫ�غ��ٴ����
	cout << "��ͷβ������Ԫ�غ�" << endl;
	for (int i = 0; i < 12; i++)   //����Ԫ�غ�������12��Ԫ��
		cout << d.at(i) << " ";
	cout << endl;

	//��ͷβ��ɾ��Ԫ��
	d.pop_front();  //ɾ��ͷ��Ԫ��
	d.pop_back();  //ɾ��βԪ��
	d.erase(d.begin() + 3); //ɾ��begin + 3λ�õ�Ԫ��

	//ɾ��Ԫ�غ��ٴ����
	cout << "��ͷβ��ɾ��Ԫ�غ�" << endl;
	for (int i = 0; i < 9; i++)   //����Ԫ�غ�������9��Ԫ��
		cout << d.at(i) << " ";
	cout << endl;
	system("pause");
	return 0;
}
