#include <iostream>
using namespace std;
void add(int x, int y)
{
	cout << "int: " << x + y << endl;
}
void add(float x)
{
	cout << "float: " << 10 + x << endl;
}
double add(double x, double y)
{
	return x + y;
}
int main()
{
	add(10.2);  //һ��ʵ�Ͳ���
	add(1, 3);  //�������Ͳ���
	cout << add(3.2, 2.3) << endl;  //����ʵ�Ͳ���
	system("pause");
	return 0;
}
