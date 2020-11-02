#include <iostream>
#include <cstring>                                     //strcpy_s()�����������ڵ�ͷ�ļ�
using namespace std;

class Car                                               //������
{
public:
	Car();                                             //�޲ι��캯��������
	Car(char *con_pcarname, int con_seats);     //���ι��캯��������
	~Car();                                            //��������������
	char *get_carname();
	int get_seats();
private:
	char *m_pCarName;
	int m_nSeats;
};
Car::Car()                                           //�����޲εĹ��캯��
{
	cout << "Car constructor!" << endl;
	m_pCarName = NULL;                        //����ָ���Ա�ĳ�ֵΪnullptr��ֵΪ0
	m_nSeats = 4;
}
Car::Car(char *con_pcarname, int con_seats)  //����������Ĺ��캯��
{
	int len = strlen(con_pcarname) + 1;

	cout << "Car constructor with param,car name:" << con_pcarname << endl;
	m_pCarName = new char[len];                //���ݳ�Աm_pCarNameָ���¿��ٵĿռ�
	strcpy(m_pCarName, con_pcarname); //��������������m_pCarNameָ��Ŀռ�
	m_nSeats = con_seats;
}
Car::~Car()                                        //������������
{
	static int i = 0;
	cout << "Car destructor,car name:" << m_pCarName << endl;
	if (m_pCarName)
		delete[] m_pCarName;                    //�ͷ�m_pCarNameָ��Ŀռ�
	if (i == 1)
		system("pause");
	i++;
}
char *Car::get_carname()                        //��ȡm_pCarName����ֵ
{
	return m_pCarName;
}
int Car::get_seats()                             //��ȡm_nSeats����ֵ
{
	return m_nSeats;
}
int main()
{
	Car mynewcar("my car", 4);             //��������
	Car tomcar("tom car", 7);              //��������

	cout << "my car name : " << mynewcar.get_carname() << endl;
	cout << "tom car name: " << tomcar.get_carname() << endl;

	return 0;
}
