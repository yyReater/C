#include <iostream>
using namespace std;
int main()
{
	float f = 20.2; //����һ��float���ͱ���

	//�����Կ�ѧ�����������������ĸ���Ǵ�д
	cout.setf(ios::scientific | ios::uppercase);
	cout << "f = " << f << endl;

	//��flags()������ȡ��ǰ��״̬��־
	cout << "��һ�λ�ȡ��״̬��־��" << cout.flags() << endl;
	cout.flags(ios::showpos);    //����ǰ��״̬��־�����������showpos��־��

	//�ٴε���flags()��ȡ��ǰ��״̬��־
	cout << "�ڶ��λ�ȡ��״̬��־��" << cout.flags() << endl;
	cout << "����showpos��f = " << f << endl;
	cout.unsetf(ios::showpos); //ȡ��showpos��־����
	cout << "unsetf��, f = " << f << endl;
	system("pause");
	return 0;
}
