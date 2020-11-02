#include <iostream>
#include <map>
#include <functional>
#include <string>
using namespace std;
//����printm()�������map����Ԫ��
void printm(map<char, double> mymap)
{
	pair<char, double> p;  //����pair����map��Ԫ���ǳɶԵģ�ҲҪ�ɶ����
	map<char, double>::iterator it; //���������
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		p = (pair<char, double>)*it; //��������ָ���һ��Ԫ�ش�ŵ�p��
		cout << p.first << "->" << p.second << endl; //���һ��Ԫ��
	}
}

//����printmt()�������multimap����
void printmt(multimap<int, string> mymul)
{
	pair<int, string> p;
	multimap<int, string>::iterator it;
	for (it = mymul.begin(); it != mymul.end(); it++)
	{
		p = (pair<int, string>)*it;
		cout << p.first << "->" << p.second << endl;
	}
}

int main()
{
	map<char, double> m;   //����һ��map����
	//������m�в���Ԫ��
	m['a'] = 1.2;
	m['b'] = 3.6;
	m['c'] = 6.4;
	m['d'] = 0.8;
	m['e'] = 5.3;
	m['f'] = 3.6;

	cout << "map: " << endl;
	printm(m);
	cout << "map��key = a��ֵ�� " << m['a'] << endl;
	cout << "map��key = f��Ԫ�س��ִ����� " << m.count('f') << endl;

	multimap<int, string> mt;  //����һ��multimap����
	//������mt�в���Ԫ��
	mt.insert(pair<int, string>(1, "chuan"));
	mt.insert(make_pair(1, "zhi"));
	mt.insert(multimap<int, string>::value_type(3, "bo"));
	mt.insert(multimap<int, string>::value_type(4, "ke"));

	cout << endl << "multimap: " << endl;
	printmt(mt);
	cout << "multimapͷ��Ԫ�أ� ";
	pair<int, string> p;
	p = (pair<int, string>)*mt.begin();
	cout << p.first << "->" << p.second << endl;
	cout << "multimapβ��Ԫ�أ� ";
	p = (pair<int, string>)*(--mt.end());
	cout << p.first << "->" << p.second << endl;
	system("pause");
	return 0;
}
