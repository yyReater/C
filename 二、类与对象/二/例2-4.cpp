#include <iostream>
using namespace std;

class Car                                            //������Car
{
	//��Ա����
public:
	void disp_mems_value();                       //����������ʾ���ݳ�Աֵ�ĺ���
	//���ݳ�Ա
private:
	int m_nWheels;
	int m_nSeats;
	int m_nLength;
};
void Car::disp_mems_value()                      //���Ա����disp_mems_value()��ʵ��
{
	cout << "wheels = " << m_nWheels << endl;
	cout << "seats = " << m_nSeats << endl;
	cout << "length = " << m_nLength << endl;
}
int main()
{
	Car mycar;                                     //���������mycar
	mycar.disp_mems_value();                //���ú�����ʾ���ݳ�Աֵ
	system("pause");
	return 0;
}
