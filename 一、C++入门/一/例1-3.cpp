#include <iostream>
using namespace std;
int main()
{
	int num = 100;
	const int* p1 = &num;
	int* p2 = const_cast<int*>(p1);  //������ָ��p1ת��Ϊ��ָͨ�����ͣ�ȥ��const����
	*p2 = 200;
	cout << "num =  " << num << endl;
	system("pause");
	return 0;
}
