#include <iostream>
#include <string>
using namespace std;

class Car                                              //����������
{
public:
	void set_carname(string newname)             //�����������Ƶĳ�Ա����
	{
		m_strCarName = newname;
	}
	string get_carname()                            //��ȡ�������Ƶĳ�Ա����
	{
		return m_strCarName;
	}
	void display_welcomemsg()                      //��ʾ��ӭ��Ϣ�ĳ�Ա����
	{
		cout << "Welcome to the car world  for " << m_strCarName << "!" << endl;
	}
private:
	string m_strCarName;
};

int main()
{
	string new_carname;                             //����������ڱ����û��������������
	Car mycar;

	cout << "enter the car name : ";
	getline(cin, new_carname);                    //ʹ��getline()������ȡһ���ַ���
	mycar.set_carname(new_carname);              //���ú���������������
	mycar.display_welcomemsg();                   //��ʾ��ӭ��Ϣ

	system("pause");
	return 0;
}
