#include <iostream>
using namespace std;
//����ģ������
template<typename T>
void func();
template<typename T>
void show(T& t);
//��ģ�嶨��
template<typename U>
class A
{
private:
	U item;
	static int count;
public:
	A(const U& u) :item(u){ count++; }
	~A(){ count--; }
	friend void func<U>(); //��Ԫ����ģ��
	friend void show<>(A<U>& a); //��Ԫ����ģ��
};
template<typename T>
int A<T>::count = 0;
//��Ԫ����ģ��Ķ���
template<typename T>
void func()
{
	cout << "template size: " << sizeof(A<T>) << ";";
	cout << " template func(): " << A<T>::count << endl;
}
template<typename T>
void show(T& t)
{
	cout << t.item << endl;
}

int main()
{
	func<int>();  //����int���͵ĺ���ģ��ʵ����int���ͣ����СΪ4�ֽ�
	A<int> a(10);  //���������
	A<int> b(20);
	A<double> c(1.2);
	show(a); //����show()������������������ݳ�Աֵ
	show(b);
	show(c);
	cout << "func<int> output:\n";
	func<int>();  //���е��ˣ��Ѿ�����������int���Ͷ���
	cout << "func<double>() output:\n";
	func<double>();

	system("pause");
	return 0;
}
