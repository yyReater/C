#include <iostream>
#include <cstring>
using namespace std;

class Date                                               //����������
{
public:
	Date(int y, int m, int d);                       //�����������Ĺ��캯��
	void show();
private:
	int m_nYear, m_nMonth, m_nDay;
};
Date::Date(int y, int m, int d)                   //����Date��Ĺ��캯��
{
	cout << "Date constructor!" << endl;
	m_nYear = y;
	m_nMonth = m;
	m_nDay = d;
}
void Date::show()                                   //�����Ա����show()����ʾ����
{
	cout << m_nYear << "-" << m_nMonth << "-" << m_nDay << endl;
}
class Student                                        //����ѧ����
{
public:
	//�����������Ĺ��캯����con_name��ʾѧ��������con_id��ʾѧ��id��y��m��d��ʾ������Ϣ
	Student(char *con_name, int con_id, int y, int m, int d);
	void disp_msg();
private:
	Date m_iBirthday;                                //Date���͵����ݳ�Ա
	char m_gName[20];
	int m_nID;
};
//����Student��������Ĺ��캯��������y��m��d���ڶ�Date�����m_iBirthday��ʼ��
Student::Student(char *con_name, int con_id,
	int y, int m, int d) :m_iBirthday(y, m, d)
{
	cout << "Student constructor!" << endl;
	strcpy_s(m_gName, strlen(con_name) + 1, con_name);
	m_nID = con_id;
}
void Student::disp_msg()                          //�����Ա����disp_msg()����ʾѧ����Ϣ
{
	cout << "std name:" << m_gName << ", id = " << m_nID << ", birthday:";
	m_iBirthday.show();
}
int main()
{
	Student student("xiaoming", 1, 1998, 10, 25);  //���ô������Ĺ��캯�����������
	student.disp_msg();
	system("pause");
	return 0;
}
