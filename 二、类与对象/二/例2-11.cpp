#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(string con_carname, int con_seats);     //�������Ĺ��캯��
	Car(Car &refcar);                               //�������캯��
	~Car();                                           //��������
private:
	string m_strCarName;
	int m_nSeats;
};

Car::Car(string con_carname, int con_seats)    //����������Ĺ��캯��
{
	cout << "Car constructor with params!" << endl;
	m_strCarName = con_carname;
	m_nSeats = con_seats;
}

Car::Car(Car &con_refcar)                         //���忽�����캯��
{
	cout << "Car cp constructor!" << endl;
	m_strCarName = con_refcar.m_strCarName;
	m_nSeats = con_refcar.m_nSeats;
}
Car::~Car()                                       //������������
{
	static int i = 0;
	cout << "destructor is called!" << endl;
	if (i == 1)
		system("pause");
	i++;
}
int main()
{
	Car mynewcar("my first car", 4);        //���������
	Car myseccar(mynewcar);                  //���ÿ������캯�����������
	return 0;
}
