#include <iostream>
using namespace std;

class Base                                               //�������Base
{
protected:
	int n_base;                                        //�������ݳ�Աn_base
};
class Derive :public Base                             //���幫��������Derive
{
public:
	//����disp_addr()��Ա��������ʾ�̳��Ի�������ݳ�Ա��������˽�����ݳ�Ա�ĵ�ַ��Ϣ
	void disp_addr()                                 	{
		cout << "n_base addr:" << &n_base << endl;
		cout << "n_derive addr:" << &n_derive << endl;
	}
private:
	int n_derive;
};
int main()
{
	Derive obj;                                        //�������������
	obj.disp_addr();                                  //����disp_addr()����
	//ͨ��sizeof�������objռ�õ��ֽ���
	cout << "sizeof(obj) = " << sizeof(obj) << endl;

	return 0;
}
