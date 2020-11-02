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
	list<int> lt1, lt2;
	lt1.push_back(12);
	lt1.push_back(6);
	lt1.push_back(32);
	lt2.push_front(45);
	lt2.push_front(9);
	cout << "lt1:";
	print(lt1);
	cout << "lt2:";
	print(lt2);
	//��lt1��������
	lt1.sort();
	cout << "lt1����֮��";
	print(lt1);
	//�ϲ���������
	lt1.merge(lt2);
	cout << "�ϲ�����������";
	print(lt1);
	system("pause");
	return 0;
}
