#include <iostream>
using namespace std;
template<typename T>
class A
{
	T item;
	static int count;  //��̬����
public:
	A(const T& t) :item(t){ count++; }
	~A(){ count--; }
	friend void func();  //�޲���Ԫ����
	friend void show(const A<T>& a); //�в���Ԫ����
};
template<typename T>
int A<T>::count = 0;  //��ʼ����̬����

void func()  //func()����ʵ��
{
	cout << "int count: " << A<int>::count << ";";
	cout << "double count: " << A<double>::count << ";" << endl;
}
void show(const A<int>& a)  //ģ���β�Ϊint����
{
	cout << "int: " << a.item << endl;
}

void show(const A<double>& a)
{
	cout << "double: " << a.item << endl;
}
int main()
{
	func();  //�����޲���Ԫ����
	A<int> a(10);  //����int���Ͷ���
	func();
	A<double> b(1.2);
	show(a);  //�����в�������Ԫ����
	show(b);
	system("pause");
	return 0;
}
