#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	Car(string con_carname)                     //����������Ĺ��캯��
	{
		m_strCarName = con_carname;
	}
private:
	string m_strCarName;
};

int main()
{
	Car mycar;                                   //Ӧ�����޲����Ĺ��캯����������
	return 0;
}
