#include <iostream>
using namespace std;
int max(const int& a, const int& b)  //��ģ�庯����������int�������ݵ������
{
	return a>b ? a : b;
}
template <typename T>  //���������������������ݵ����ֵ
T max(const T& t1, const T& t2)
{
	return t1 > t2 ? t1 : t2;
}
template<typename T>  //���������������������ݵ����ֵ
T max(const T& t1, const T& t2, const T&t3)
{
	return max(max(t1, t2), t3);
}
int main()
{
	cout << max(1, 2) << endl;  //���÷�ģ�庯��
	cout << max(1, 2, 3) << endl; //�������������ĺ���ģ��
	cout << max(1, 'e') << endl; //�������������ĺ���ģ��
	cout << max(6, 3.2) << endl;  //���÷�ģ�庯��

	system("pause");
	return 0;
}
