#include <iostream>
#include <string>
using namespace std;

class Car                                                      //������
{
public:
	Car()                                                      //���幹�캯��
	{
		cout << "Car constructor!" << endl;
		m_strCarName = "default name";
	}
	string get_carname()                                    //�����ȡ�������Ƶĺ���
	{
		return m_strCarName;
	}
private:
	string m_strCarName;                                     //���ݳ�Ա����¼��������
};

int main()
{
	Car mycar;                                                //��������

	cout << "car name : " << mycar.get_carname() << endl;   //��ʾ��������
	system("pause");
	return 0;
}
