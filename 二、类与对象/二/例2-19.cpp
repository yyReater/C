#include <iostream>
#include <string>
using namespace std;

class Student                                              //����Student��
{
public:
	Student(string con_name, int con_id);
	~Student();
	string get_stdname() const;                         //��const��������Ա����
	void print_stdname();
private:
	string m_strName;//const string m_strName;
	int m_nID;
};
//����Student�Ĺ��캯��
Student::Student(string con_name, int con_id) :m_strName(con_name)
{
	m_nID = con_id;
}
Student::~Student()
{
}
string Student::get_stdname() const                  //���峣��Ա��������ȡѧ������
{
	//m_strName = "Paul";                               //���󣬳���Ա�����������޸ĳ�Ա��ֵ
	return m_strName;
}
void Student::print_stdname()                         //��ͨ��Ա��������ʾѧ������
{
	//m_strName = "Paul";                              //��ȷ�� ��ͨ��Ա���������޸ĳ�Ա��ֵ
	cout << "std's name:" << m_strName << endl;
}
int main()
{
	Student std_tom("Tom", 20);
	std_tom.print_stdname();                         //������ͨ��Ա����
	cout << std_tom.get_stdname() << endl;        //���ó���Ա����
	system("pause");
	return 0;
}
