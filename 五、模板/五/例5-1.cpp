#include <iostream>
using namespace std;
//���庯��ģ��
template<typename T>
T add(T t1, T t2)
{
	return t1 + t2;
}
int main()
{
	cout << add(1, 2) << endl;  //����int���Ͳ���
	cout << add(1.2, 3.4) << endl; //����double���Ͳ���
	system("pause");
	return 0;
}
