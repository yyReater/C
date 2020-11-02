#include <iostream>
using namespace std;
class Date;                                              //����Date��
class Time                                               //����Time�࣬����ʱ����
{
public:
	Time(int con_hour, int con_minute, int con_second) //���幹�캯��
	{
		m_nHour = con_hour;
		m_nMinute = con_minute;
		m_nSecond = con_second;

	}
	friend class Date;                                 //����DateΪTime����Ԫ��
private:
	int m_nHour, m_nMinute, m_nSecond;
};
class Date                                               //����Date��
{
public:
	Date(int con_year, int con_month, int con_day)//���幹�캯��
	{
		m_nYear = con_year;
		m_nMonth = con_month;
		m_nDay = con_day;
	}
	void display_date_time(Time &ref_time);        //����display_date_time()����
private:
	int m_nYear, m_nMonth, m_nDay;
};
/*
* ����display_date_time()��������ʾ�����ա�ʱ������Ϣ������DateΪTime�����Ԫ�࣬
* ��Date�еĺ���ΪTime�����Ԫ���������Է���Time���˽�г�Ա��
* ����ֱ�ӷ�����˽�г�Ա��m_nHour��m_nMinute��m_nSecond
*/
void Date::display_date_time(Time &ref_time)
{
	cout << m_nYear << "-" << m_nMonth << "-" << m_nDay << " "
		<< ref_time.m_nHour << ":" << ref_time.m_nMinute
		<< ":" << ref_time.m_nSecond << endl;
}
int main()
{
	Time time(17, 30, 20);                          //����Time����
	Date date(2015, 3, 31);                         //����Date����
	date.display_date_time(time);                  //��ʾ�����ա�ʱ������Ϣ
	system("pause");
	return 0;
}
