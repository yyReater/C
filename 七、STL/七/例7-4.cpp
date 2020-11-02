#include <iostream>
#include <list>
using namespace std;

template<typename T>
void print(list<T> mylist)  //����print()���������list����Ԫ��
{
	typename list<T>::iterator it;  //����list�б�ĵ�����
	for (it = mylist.begin(); it != mylist.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	list<int> lt;
	for (int i = 0; i < 10; i++)
		lt.push_back(i + 1);   //�����������Ԫ��
	cout << "���list�����е�Ԫ�أ�" << endl;
	print(lt);
	lt.pop_back(); //ɾ�����һ��Ԫ��
	lt.push_front(5); //��ͷ�����Ԫ��5

	cout << "�ٴ����list�����е�Ԫ�أ�" << endl;
	print(lt);
	lt.remove(5);
	cout << "ɾ��5֮�����list�����е�Ԫ�أ�" << endl;
	print(lt);
	system("pause");
	return 0;
}
