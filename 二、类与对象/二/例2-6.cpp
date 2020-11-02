#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(string con_carname, int con_seats)               //����������������Ĺ��캯��
	{
		cout << "Calling Car constructor, set carname,seats!" << endl;
		m_strCarName = con_carname;                      //��m_strCarName���Ը�ֵ
		m_nSeats = con_seats;                             //��m_nSeats���Ը�ֵ
	}
	Car(string con_carname)                               //�������һ�������Ĺ��캯��
	{
		cout << "Calling Car constructor, set carname!" << endl;
		m_strCarName = con_carname;
	}
	void disp_memmsg()                                     //��ʾ��Աֵ�ĺ���
	{
		cout << "carname: " << m_strCarName << ","
			<< "seats = " << m_nSeats << endl;
	}
private:
	string m_strCarName;
	int m_nSeats;
};
int main()
{
	Car mycar("my new car", 4);                       //���ô����������Ĺ��캯����������
	Car tomcar("tom's car");                           //���ô�һ�������Ĺ��캯����������
	mycar.disp_memmsg();
	tomcar.disp_memmsg();

	system("pause");
	return 0;
}

