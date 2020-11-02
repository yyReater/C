#include <iostream>
#include <string>
using namespace std;

class Student                                         //����Student��
{
public:
	Student(string con_name, int con_id);
	~Student();
	string get_stdname();
	//��̬��Ա����get_totalnum()�����ʾ�̬���ݳ�Ա
	static int get_totalnum();
	//��̬��Ա����get_totalnum()��Ϊ�˷��ʷǾ�̬���ݳ�Ա�����ж������ò���
	static int get_totalnum(Student &stdref);

private:
	static int s_nTotalNum;                            //��̬���ݳ�Աs_nTotalNum
	string m_strName;
	int m_nID;
};
//����Student���캯����ÿ����һ�����󣬼�¼ѧ����������s_nTotalNum����1
Student::Student(string con_name, int con_id) :m_strName(con_name)
{
	s_nTotalNum++;
	m_nID = con_id;
}
//��������������ÿ����һ������s_nTotalNum��1
Student::~Student()
{
	s_nTotalNum--;
	cout << "destructor, totalnum = " << s_nTotalNum << endl;
	if (s_nTotalNum == 0)
		system("pause");
}

string Student::get_stdname()                      //�����ȡѧ�������ĺ���
{
	return m_strName;
}
//���徲̬��Ա��������ȡs_nTotalNumֵ����ʾ��ĳ��ѧ��������
int Student::get_totalnum(Student &stdref)
{
	cout << stdref.m_strName << " entered the school!" << endl;
	return s_nTotalNum;
}
////���徲̬��Ա��������ȡ��̬���ݳ�Աs_nTotalNum��ֵ
int Student::get_totalnum()
{
	return s_nTotalNum;
}

int Student::s_nTotalNum = 0;                     //��ʼ����̬���ݳ�Աs_nTotalNum

int main()
{
	cout << "access to static func \"get_totalnum()\": totalnum = "
		<< Student::get_totalnum() << endl;     //ͨ���������ʾ�̬��Ա����

	Student std_tom("Tom", 20);                   //���������std_tom

	cout << std_tom.get_stdname() << ", totalnum = "
		<< std_tom.get_totalnum(std_tom) << endl;//ͨ��������ʾ�̬��Ա����

	return 0;
}
