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
	list<int> lt1, lt2, lt3;
	lt1.push_back(12);
	lt1.push_back(6);
	lt1.push_back(32);
	lt2.push_front(45);
	lt2.push_front(9);
	lt3.push_back(100);
	lt3.push_back(2);
	lt3.push_back(11);
	cout << "lt1:";
	print(lt1);
	cout << "lt2:";
	print(lt2);
	cout << "lt3:";
	print(lt3);
	//����splice()������lt2�еĵ�һ��Ԫ�ز��뵽lt1ĩβ
	lt1.splice(lt1.end(), lt2, lt2.begin());
	cout << "lt1��lt2�ϲ���,lt1: ";
	print(lt1);
	cout << "lt1��lt2�ϲ���,lt2: ";
	print(lt2);
	//��lt3�������뵽lt1����ǰ��
	lt1.splice(lt1.begin(), lt3);
	cout << "lt1��lt3�ϲ���lt1: ";
	print(lt1);
	cout << "lt1��lt3�ϲ���lt3: ";
	print(lt3);
	system("pause");
	return 0;
}
