#include <iostream>
#include <cstring>
using namespace std;

class Date                                          //�����ඨ��
{
public:
	Date(int y, int m, int d);                  //�����������Ĺ��캯��
	Date(Date &con_date);                        //�����������캯��
private:
	int m_nYear, m_nMonth, m_nDay;
};
Date::Date(int y, int m, int d)                 //����Date��������Ĺ��캯��
{
	cout << "Date constructor!" << endl;
	m_nYear = y;
	m_nMonth = m;
	m_nDay = d;
}

Date::Date(Date &con_date)                       //����Date��Ŀ������캯��
{
	m_nYear = con_date.m_nYear;
	m_nMonth = con_date.m_nMonth;
	m_nDay = con_date.m_nDay;
}
class Student                                    //����Student��
{
public:
	static int s_nTotalNum;                   //��̬���ݳ�Ա
	Student(char *con_name, int con_id, Date &con_birthday);
	~Student();
private:
	char m_gName[20];
	int m_nID;
	Date m_iBirthday;
};

//����Student��������Ĺ��캯��
Student::Student(char* con_name, int con_id,
	Date &con_birthday) :m_iBirthday(con_birthday)
{
	int namelen = strlen(con_name) + 1;
	strncpy(m_gName, con_name, namelen);
	m_nID = con_id;
	s_nTotalNum++;                         //ͨ�����캯��ÿ����һ������s_nTotalNum������1
}
Student::~Student()
{
	s_nTotalNum--;                          //����һ������s_nTotalNum������1
	cout << "destructor, totalnum = " << s_nTotalNum << endl;
	if (s_nTotalNum == 0)
		system("pause");
}

int Student::s_nTotalNum = 0;            //��̬���ݵĳ�ʼ��
int main()
{
	Date tombirthday(1998, 5, 20);
	//����һ��Student����
	Student std_tom("Tom", 1, tombirthday);
	cout << "Tom, the totalnum = " << std_tom.s_nTotalNum << endl;

	Date paulbirthday(1998, 4, 12);
	Student std_paul("paul", 2, tombirthday);//�����ڶ���Student����
	cout << "Paul, the totalnum = " << std_paul.s_nTotalNum << endl;
	return 0;
}
