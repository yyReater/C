#include <iostream>
using namespace std;

class Car                                         //������Car
{
	//��Ա����
public:
	void disp_welcomemsg();                    //����disp_welcomemsg()����
	int get_wheels();                           //����get_wheels()����
	void set_wheels(int);                      //����set_wheels()����
	//���ݳ�Ա
private:
	int m_nWheels;
};
void Car::disp_welcomemsg()                  //���Ա����disp_welcomemsg()��ʵ��
{
	cout << "Welcome to the car world!" << endl;
}
int Car::get_wheels()                        //���Ա����get_wheels()��ʵ�֣���ȡ������
{
	return m_nWheels;
}
void Car::set_wheels(int n)                 //���Ա����set_wheels()ʵ�֣����ó�����
{
	m_nWheels = n;
}
int main()
{
	Car mycar;                                 //���������mycar
	mycar.disp_welcomemsg();                //���ʳ�Ա��������ʾ��ӭ��Ϣ
	mycar.set_wheels(4);                     //���ʳ�Ա���������ó�������
	//���ʳ�Ա��������ʾ��������
	cout << "wheels = " << mycar.get_wheels() << endl;
	system("pause");
	return 0;
}
