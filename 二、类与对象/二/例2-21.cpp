#include <iostream>
using namespace std;

class IntClass                                           //����IntClass��
{
public:
	IntClass(int con_n, int con_m);
	friend int add(IntClass &);                       //������ͨ����add()Ϊ��Ԫ����
private:
	int m_nN, m_nM;
};

IntClass::IntClass(int con_n, int con_m)
{
	m_nN = con_n;
	m_nM = con_m;
}

int add(IntClass &refnum)                             //������ͨ����add()
{
	//��������IntClass����Ԫ����������ֱ�ӷ���˽�г�Ա��ʵ������˽�����ݳ�Ա�����
	return refnum.m_nN + refnum.m_nM;
}

int main()
{
	IntClass intnum(5, 7);                             //���������
	cout << "add(5, 7) = " << add(intnum) << endl;//����add()����
	system("pause");
	return 0;
}
