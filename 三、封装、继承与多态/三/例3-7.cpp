#include <iostream>
using namespace std;

class Animal                                             //�������
{
public:
	Animal(int con_weight, int con_age);          //�����������Ĺ��캯��
private:
	int m_nWeight;
	int m_nAge;
};
Animal::Animal(int con_weight, int con_age)    //�������������Ĺ��캯��
{
	m_nWeight = con_weight;
	m_nAge = con_age;
	cout << "Animal constructor with param!" << endl;
}
class Cat :public Animal
{                                                     //����������
public:
	//����������������Ĺ��캯��
	Cat(string con_name, int con_weight, int con_age);
private:
	string m_strName;
};
/*
* ����������������Ĺ��캯�������������У���һ���������ڶ�������˽�г�Աm_strName���г�ʼ����
* �ڶ������������������ڻ������ݳ�Ա�ĳ�ʼ��
*/
Cat::Cat(string con_name, int con_weight, int con_age) :Animal(con_weight, con_age)
{
	m_strName = con_name;
	cout << "Cat constructor with param!" << endl;
}
int main()
{
	Cat cat("Persian", 5, 7);                  //�������������
	system("pause");
	return 0;
}
