#include <iostream>
using namespace std;
void func1(const int *x) //����ָ��
{
	cout << "const int*: " << *x << endl;
}
void func1(int *x) //��ָͨ��
{
	cout << "int*: " << *x << endl;
}
void func2(const int &x) //������
{
	cout << "const int&: " << x << endl;
}
void func2(int &x) //��ͨ����
{
	cout << "int&: " << x << endl;
}
int main()
{
	const int a = 1;
	int b = 2;
	func1(&a); //��������
	func1(&b); //�ǳ�������

	func2(a);  //��������
	func2(b);  //�ǳ�������
	system("pause");
	return 0;
}
