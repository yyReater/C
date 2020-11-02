#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car();
	Car(string con_carname, int con_seats);      //�������Ĺ��캯��
	Car(Car &refcar);                                //�������캯��
	~Car();                                            //��������
	Car get_carinfo();                               //��ȡ������Ϣ�ĺ���
	void print();
private:
	string m_strCarName;
	int m_nSeats;
};
Car::Car()                                           //�����޲����Ĺ��캯��
{
	cout << "constructor!" << endl;
}
Car::Car(string con_carname, int con_seats)   //����������Ĺ��캯��
{
	cout << "Car constructor with params!" << endl;
	m_strCarName = con_carname;
	m_nSeats = con_seats;
}

Car::Car(Car &con_refcar)                      //���忽�����캯��
{
	cout << "Car cp constructor!" << endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car()                                       //������������
{
	static int i = 0;
	cout << "destructor is called!" << endl;
	if (i == 3)
		system("pause");
	i++;
}
Car Car::get_carinfo()                        //�����ȡ������Ϣ�ĺ���
{
	Car tmp(m_strCarName, m_nSeats);

	return tmp;                                //����ֵΪ�����
}
void Car::print()                             //��ӡ��������ֵ
{
	cout << "carname: " << m_strCarName << ", "
		<< "seats�� " << m_nSeats << endl;
}
int main()
{
	Car mynewcar("my first car", 4);        //ͨ���������Ĺ��캯�����������
	Car ret;                                     //ͨ���޲����Ĺ��캯�����������
	//���ó�Ա����get_carinfo()���������շ���ֵ
	ret = mynewcar.get_carinfo();
	ret.print();                                 //��ʾ����ֵ

	return 0;
}
