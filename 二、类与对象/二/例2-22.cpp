#include <iostream>
using namespace std;

class IntAddend;                                         //����IntAddend��������
class IntAugend                                           //����IntAugend������
{
public:
	IntAugend(int con_m)                               //���幹�캯��
	{
		m_nM = con_m;
	}
	void add(IntAddend &ref_addend);
private:
	int m_nM;
};
class IntAddend                                         //����IntAddend��������
{
public:
	IntAddend(int con_n)
	{
		m_nN = con_n;
	}
	//����IntAugend���е�add()����Ϊ�������Ԫ����������ֱ�ӷ��ʱ���˽�г�Ա
	friend void IntAugend::add(IntAddend &);
private:
	int m_nN;
};
void IntAugend::add(IntAddend &ref_addend)        //add()�����Ķ���
{
	//ֱ�ӷ���IntAddendd����ref_addend�е�˽�г�Աm_nN
	cout << "addend: n = " << ref_addend.m_nN << ",m =  " << m_nM << endl;
	//�Բ�ͬ���������������ݳ�Ա�������
	cout << m_nM << " + " << ref_addend.m_nN << " = "
		<< m_nM + ref_addend.m_nN << endl;
}
int main()
{
	IntAugend intnum1(5);                            //����IntAugend�����intnum1
	IntAddend intnum2(3);                            //����IntAugend�����intnum1
	intnum1.add(intnum2);                            //����add()����ʵ���������
	system("pause");
	return 0;
}
