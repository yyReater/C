#include <iostream>
using namespace std;

class Circle                                         //������Circle
{
public:
	Circle(double con_radius);                    //�������캯��
	double circumference();                       //������Բ�ܳ��ĺ���
private:
	double m_fRadius;                              //���ݳ�Ա����¼Բ�İ뾶
	const double PI;                                //�����ݳ�Ա������Բ����
};
//���幹�캯���������ݳ�Աͨ����ʼ�����ʼ��
Circle::Circle(double con_radius) :PI(3.14)
{
	m_fRadius = con_radius;
}
double Circle::circumference()
{
	return 2 * PI * m_fRadius;
}

int main()
{
	Circle c1(2);                                   //����Circle����c1
	cout << "circumference:" << c1.circumference() << endl;
	system("pause");
	return 0;
}
