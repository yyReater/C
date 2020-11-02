#include <iostream>                                   
#include <string>
using namespace std;
class Animal                                               //����Animal��
{
public:
	void speak()                                           //��Ա����
	{
		cout << "animal language!" << endl;
	}
};
class Cat :public Animal                                  //����Animal��������Cat
{
public:
	Cat(string con_name) :m_strName(con_name){}       //���캯��
	void print_name()                                     //��Ա��������ʾè������
	{
		cout << "cat name: " << m_strName << endl;
	}
private:
	string m_strName;                                      //���ݳ�Ա����¼è����
};
int main()
{
	Cat cat("Persian");                                  //�������������
	cat.print_name();
	cat.speak();                                          //���������ʹ�û����Ա����
	system("pause");
	return 0;
}
