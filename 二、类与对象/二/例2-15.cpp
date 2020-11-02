#include <iostream>
#include <cstring>
using namespace std;
class Car                                                  //������Car
{
public:
	Car(char *con_pcarname, int con_seats);         //�����������Ĺ��캯��
	Car(Car &con_refcar);                              //�����������캯��
	~Car();                                               //������������

private:
	char *m_pCarName;                                   //ָ���Ա��ָ������������ƵĿռ�
	int m_nSeats;
};

Car::Car(char *con_pcarname, int con_seats)         //���캯������
{
	int len = strlen(con_pcarname) + 1;
	m_pCarName = new char[len];                        //���ٿռ䣬m_pCarName��¼�׵�ַ

	//��m_pCarNameָ��Ŀռ��и�����������
	strncpy(m_pCarName, con_pcarname, len);
	m_nSeats = con_seats;
}
Car::Car(Car &con_refcar)                          //���忽�����캯��
{
	cout << "calling copy constructor!" << endl;
	int len = strlen(con_refcar.m_pCarName) + 1;
	m_pCarName = new char[len];                  //m_pCarNameָ��new���ٵĿռ�
	strncpy(m_pCarName, con_refcar.m_pCarName, len);
	m_nSeats = con_refcar.m_nSeats;
	cout << "end of copy constructor!" << endl;
}
Car::~Car()                                           //������������
{
	static int i = 0;
	cout << "destructor is called!" << endl;
	delete[] m_pCarName;                           //�ͷ�m_pCarNameָ��Ŀռ�
	if (i == 1)
		system("pause");
	i++;
}

int main()
{
	Car mynewcar("my new car", 4);             //���ô������Ĺ��캯�����������
	Car myseccar(mynewcar);                     //���ÿ������캯�����������
	return 0;
}
