#include <iostream>
using namespace std;

class Car                                          //������Car
{
	//��Ա����
public:
	void disp_welcomemsg();                     //����disp_welcomemsg()����
	int get_wheels();                            //����get_wheels()����
	void set_wheels(int);                       //����set_wheels()����
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
void Car::set_wheels(int n)                //���Ա����set_wheels()��ʵ�֣����ó�����
{
	m_nWheels = n;
}
int main()
{
	Car myfstcar, myseccar;               //���������myfstcar��myseccar

	myfstcar.set_wheels(4);               //����myfstcar�ĳ�������Ϊ4
	myseccar.set_wheels(6);               //����myseccar�ĳ�������Ϊ6
	//���ʳ�Ա��������ʾ��������
	cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
	cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

	system("pause");
	return 0;
}
