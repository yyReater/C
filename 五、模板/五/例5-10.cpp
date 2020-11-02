#include <iostream>
using namespace std;
//���庯��ģ��
template<typename T>
bool IsEqual(T t1, T t2)
{
	return t1 == t2;
}
//����ģ����ػ�
template<>
bool IsEqual(char* s1, char* s2)
{
	return strcmp(s1, s2) == 0;
}
//��ģ��
template<typename T>
class Compare
{
public:
	bool IsEqual(T t1, T t2)
	{
		return t1 == t2;
	}
};
//��ģ���ػ�
template<>
class Compare<char*>
{
public:
	bool IsEqual(char* s1, char* s2)
	{
		return strcmp(s1, s2) == 0;
	}
};
int main()
{
	char str1[] = "abc";
	char str2[] = "abc";
	cout << "����ģ��ͺ���ģ���ػ�" << endl;
	cout << IsEqual(1, 3) << endl;  //���ú���ģ��
	cout << IsEqual(str1, str2) << endl;  //�����ػ��ĺ���ģ��
	Compare<int> c1;
	Compare<char*> c2;
	cout << "��ģ�����ģ���ػ�" << endl;
	cout << c1.IsEqual(1.2, 3.4) << endl; //������ģ��
	cout << c2.IsEqual(str1, str2) << endl; //�����ػ�����ģ��
	system("pause");
	return 0;
}
