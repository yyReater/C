#include <iostream>
#include <set>
#include <functional>
using namespace std;
int main()
{
	set<int, greater<int> > s;  //����һ��set������Ԫ�ذ���������
	multiset<char> ms;  //����һ��multiset����
	cout << "s�����ɵ����Ԫ������" << s.max_size() << endl;
	cout << "ms�����ɵ����Ԫ������" << ms.max_size() << endl;
	//��s�в���Ԫ��
	pair<set<int>::iterator, bool> ps;
	ps = s.insert(12);
	if (ps.second == true)
		cout << "insert success" << endl;
	s.insert(39);
	s.insert(32);
	s.insert(26);
	//��ms�в���Ԫ��
	ms.insert('a');
	ms.insert('z');
	ms.insert('T');
	ms.insert('u');
	ms.insert('u');
	//������������е�Ԫ��
	set<int>::iterator its; //����s�����ĵ����������ڻ�ȡԪ��
	cout << "s������Ԫ�أ�";
	for (its = s.begin(); its != s.end(); its++)
		cout << *its << " ";
	cout << endl;
	multiset<char>::iterator itms;  //����ms�����ĵ�����
	cout << "ms������Ԫ�أ�";
	for (itms = ms.begin(); itms != ms.end(); itms++)
		cout << *itms << " ";
	cout << endl;

	//��������������ͷβԪ��
	cout << "sͷԪ�أ� " << *s.begin() << endl;
	cout << "msβԪ�أ� " << *(--ms.end()) << endl;
	//����ms������uԪ�س��ֵĴ���
	cout << "ms������uԪ�س��ֵĴ�����" << ms.count('u') << endl;
	system("pause");
	return 0;
}
